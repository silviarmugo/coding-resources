#include <stdio.h>
#include "prototypes.h"

#define MAX_LEN = 50
#define STUDENT_FILE "student.csv"

// create a struct to store student information
typedef struct
{
    char name[50];
    char class[20];
    int age;
    int adm;
    float balance;
} Student;

void registerStudent()
{
    FILE *file = fopen(STUDENT_FILE, "a");
    if (file == NULL)
    {
        printf("Error while opening the file\n");
        return;
    }

    // initialize the struct
    Student student;

    printf("Enter your name\n");
    scanf(" %[^\n]", student.name);

    printf("Enter your class\n");
    scanf(" %[^\n]", student.class);

    printf("Enter your age\n");
    scanf("%d", &student.age);

    printf("Enter your admission number\n");
    scanf("%d", &student.adm);

    printf("Enter your balance\n");
    scanf("%f", &student.balance);

    fprintf(file, "%s, %s, %d, %d, %f\n",
            student.name,
            student.class,
            student.age,
            student.adm,
            student.balance);
    fclose(file);

    printf("Student registered successively\n");
}
void viewStudentDetails()
{
    FILE *file = fopen(STUDENT_FILE, "r");
    if (file == NULL)
    {
        printf("Error while opening the file");
        return;
    }

    int admNumber;

    printf("Enter your admission number\n");
    scanf("%d", &admNumber);

    Student student;
    int found = 0;

    // Reset file pointer to the beginning of the file
    fclose(file);
    file = fopen(STUDENT_FILE, "r");
    if (file == NULL)
    {
        printf("Error while opening the file");
        return;
    }

    while (fscanf(file, "%[^,], %[^,], %d, %d, %f\n",
                  student.name,
                  student.class,
                  &student.age,
                  &student.adm,
                  &student.balance) != EOF)
    {
        if (student.adm == admNumber)
        {
            printf("Name: %s\nClass: %s\nAge: %d\nAdmission Number: %d\nBalance: %.2f\n",
                   student.name,
                   student.class,
                   student.age,
                   student.adm,
                   student.balance);

            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Student details for admission number %d not found\n", admNumber);
    }

    fclose(file);
}
void checkBalance()
{
    FILE *file = fopen(STUDENT_FILE, "r");
    if (file == NULL)
    {
        printf("Error while opening the file");
        return;
    }

    int admNumber;

    printf("Enter your admission number\n");
    scanf("%d", &admNumber);

    Student student;
    int found = 0;

    // Reset file pointer to the beginning of the file
    fclose(file);
    file = fopen(STUDENT_FILE, "r");
    if (file == NULL)
    {
        printf("Error while opening the file");
        return;
    }

    while (fscanf(file, "%[^,], %[^,], %d, %d, %f\n",
                  student.name,
                  student.class,
                  &student.age,
                  &student.adm,
                  &student.balance) != EOF)
    {
        if (student.adm == admNumber)
        {
            printf("Dear %s, your balance for admission %d is %.2f\n",
                   student.name,
                   student.adm,
                   student.balance);

            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Fee balance details for admission number %d not found\n", admNumber);
    }

    fclose(file);
}