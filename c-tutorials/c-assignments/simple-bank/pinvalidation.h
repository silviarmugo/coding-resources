#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int pinValidation(char* pin , char* accNoEntered) {
    FILE *file;
    char line[256];
    char storedPin[5];
    char accNo[7];
    int balance;

    bool pinFound=false;

    file = fopen("customers.csv", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

   
    while (fgets(line, sizeof(line), file)) {
       
    int itemsRead = sscanf(line, "%*[^,],%*[^,],%7[^,],%5[^,],%d", accNo, storedPin, &balance);
    
    if (itemsRead == 3) {
        //printf("%s\n", accNo);
        int result = strcmp(accNoEntered, accNo);
        if (result == 0) {  
            result = strcmp(pin, storedPin);
            if (result == 0) {
                pinFound = true;
                //printf("balance for %s is %d\n", accNoEntered, balance);
                fclose(file);
                return balance;
            } else {
                fclose(file);
                return EXIT_FAILURE;
            }
        } 
   }
   }   
}   
    

