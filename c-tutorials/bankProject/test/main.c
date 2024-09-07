#include <stdio.h>
#include <string.h>

// #include "functions.c"
// #include "checkAccount.c"
// #include "prototypes.h"

int main(void)
{
    char accountNumber[10];
    char name[50];
    int pin;
    double amount;

    int option;
    printf("Welcome to Simple Bank\n");
    while (1)
    {
        printf(" 1. Open Account\n 2. Deposit\n 3. Withdraw\n 4. Check Balance\n 5. Transfer money\n 6.Exit\n");
        printf("Choose option\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            openAccount();
            break;
        case 2:
            checkBalance();
            break;
        case 3:
            depositFunds();
            break;
        case 4:
            withdrawFunds();
            break;
        case 5:
            transferFunds();
            break;
        case 6:
            printf("program exiting");
            return 1;

        default:
            printf("Invalid option, choose a number between 1 and 6");
            break;
        }
    }

    return 0;
}
