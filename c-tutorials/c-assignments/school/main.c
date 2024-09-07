#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototypes.h"

#define MAX_LEN 40

typedef struct
{
    char admission_number[7];
    char name[MAX_LEN];
    char class[MAX_LEN];
    float fees_balance;
} Student;

int main()
{
    int option;
    char admission_number[MAX_LEN];

    printf("WELCOME BACK TO HIGH SCHOOL\n");

    while (1)
    {
        printf("1. Register Student\n");
        printf("2. View students details\n");
        printf("3. Check fees balance\n");
        printf("4. Exit\n");

        printf("Enter your option: ");
        scanf("%d", &option);
        getchar();

        switch (option)
        {
        case 1:
            registerStudent();
            break;

        case 2:

            viewStudentDetails();
            break;

        case 3:

            checkFeesBalance();
            break;

        case 4:
            printf("Exiting program.\n");
            return 0;

        default:
            printf("Invalid option. Please try again.\n");
        }
    }

    return 0;
}

void registerStudent()
{
    Student student;
    FILE *file = fopen("students.csv", "a");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    while (1)
    {
        printf("Enter a 6 digit admission number: ");
        fgets(student.admission_number, sizeof(student.admission_number), stdin);
        student.admission_number[strcspn(student.admission_number, "\n")] = '\0';

        FILE *check_file = fopen("students.csv", "r");
        if (check_file == NULL)
        {
            printf("Error opening file.\n");
            fclose(file);
            return;
        }
        char line[MAX_LEN];
        int found = 0;
        while (fgets(line, sizeof(line), check_file))
        {
            char *token = strtok(line, ",");
            if (strcmp(token, student.admission_number) == 0)
            {
                printf("Admission number already exists in the system. Please enter a different one.\n");
                found = 1;
                break;
            }
        }
        fclose(check_file);
        if (!found)
            break;
    }

    printf("Enter name: ");
    fgets(student.name, MAX_LEN, stdin);
    student.name[strcspn(student.name, "\n")] = '\0'; // Remove the newline character from the name

    int c;
    while ((c = getchar()) != '\n' && c != EOF) { };

    printf("Enter class: ");
    fgets(student.class, MAX_LEN, stdin);
    student.class[strcspn(student.class, "\n")] = '\0';

    printf("Enter initial fees balance paid: ");
    scanf("%f", &student.fees_balance);

    fprintf(file, "%s,%s,%s,%.2f\n", student.admission_number, student.name, student.class, student.fees_balance);

    fclose(file);

    printf("Student registered successfully\n");
}

void viewStudentDetails(){
    char admission_number[7];

    FILE *file = fopen("students.csv", "r");

    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }
    Student student;
    printf("Enter admission number: ");
    fgets(admission_number, sizeof(admission_number), stdin);
    admission_number[strcspn(admission_number, "\n")] = '\0';

    int found = 0;

    char line[MAX_LEN * 4];

    while (fgets(line, sizeof(line), file) != NULL)
    {
        if (sscanf(line, "%[^,],%[^,],%[^,],%f", student.admission_number, student.name, student.class, &student.fees_balance) == 4)
        {
            if (strcmp(student.admission_number, admission_number) == 0)
            {
                printf("The following are the student's details:\n");
                printf("Admission Number: %s\n", student.admission_number);
                printf("Name: %s\n", student.name);
                printf("Class: %s\n", student.class);
                printf("Fees Balance: %.2f\n", student.fees_balance);
                found = 1;
                break;
            }
        }
    }

    if (!found)
    {
        printf("Student not found.\n");
        return;
    }

    fclose(file);
    printf("Student details viewed successfully\n"); // Uncommented this line
}
void checkFeesBalance(){

    char admission_number[7];
    FILE *file = fopen("students.csv", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }
    Student student;
    char line[MAX_LEN * 4];

    printf("Enter admission number: ");
    fgets(admission_number, sizeof(admission_number), stdin);
    admission_number[strcspn(admission_number, "\n")] = '\0';

    int found = 0;

    while (fgets(line, sizeof(line), file) != NULL)
    {
        if (sscanf(line, "%[^,],%[^,],%[^,],%f", student.admission_number, student.name, student.class, &student.fees_balance) == 4)
        {
            if (strcmp(student.admission_number, admission_number) == 0)
            {
                printf("Fees Balance for %s: %.2f\n", student.name, student.fees_balance);
                found = 1;
                break;
            }
        }
    }

    if (!found)
    {
        printf("Student with admission number %s not found.\n", admission_number);
        return;
    }

    fclose(file);
    printf("Balance checked successfully\n"); // Uncommented this line
}