#include <stdio.h>
#include <string.h>

#include "functions.c"

int main(void)
{
    int option;
    printf("Welcome to Havard University\n");
    while (1)
    {
        printf(" 1. Register student\n 2. View your details\n 3. Check balance\n 4. Exit\n");
        printf("Choose option\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            registerStudent();
            break;
        case 2:
            viewStudentDetails();
            break;
        case 3:
            checkBalance();
            break;
        case 4:
            printf("program exiting");
            return 1;

        default:
            printf("Invalid option, choose a number between 1 and 4");
            break;
        }
    }

    return 0;
}
