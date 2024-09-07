#include<stdio.h>
#include<string.h>
#include<stdbool.h>



void updateAccBalance(char* accNumber, int newBalance) {
    FILE *file, *temp;
    char line[256];
    int oldBalance = 0;
    char storedAccNo[8];
    char name[41], branch[41];
    char pin[6];
    char tempFilePath[] = "temp.csv";

    file = fopen("customers.csv", "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    temp = fopen(tempFilePath, "w");
    if (temp == NULL) {
        perror("Error creating temporary file");
        fclose(file);
        return;
    }

    while (fgets(line, sizeof(line), file)) {
        int itemsRead = sscanf(line, "%40[^,],%40[^,],%7[^,],%4[^,],%d", name, branch, storedAccNo, pin, &oldBalance);
        if (itemsRead == 5) {
            int result = strcmp(accNumber, storedAccNo);
            if (result == 0) {
                // Update balance for the matched account number
                fprintf(temp, "%s,%s,%s,%s,%d\n", name, branch, storedAccNo, pin, newBalance);
            } else {
                // Copy the line as-is to the temporary file
                fprintf(temp, "%s", line);
            }
        } else {
            // Copy the line as-is to the temporary file
            fprintf(temp, "%s", line);
        }
    }

    fclose(file);
    fclose(temp);

    // Replace the original file with the temporary file
    remove("customers.csv");
    rename(tempFilePath, "customers.csv");

    //printf("\nAccount balance updated successfully!\n");
}

bool checkAccountNumber(char* accNoEntered) {
    FILE *file;
    char line[256];
    char accountNo[7]; // Increase array size to accommodate 6 characters + null terminator
    bool accountFound = false;
    file = fopen("customers.csv", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return false;
    }
    while (fgets(line, sizeof(line), file)) {
        int itemsRead = sscanf(line, "%*[^,],%*[^,],%6[^,]", accountNo);
        if (itemsRead == 1) {
            int result = strcmp(accNoEntered, accountNo);
            if (result == 0) {
                accountFound = true;
                break;
            }
        } else {
            printf("Error: Incorrect input format in line: %s\n", line);
        }
    }
    fclose(file);
    if (accountFound) {
        return true;
    } else {
       // printf("Account number does not exist!\n");
        return false;
    }
}
