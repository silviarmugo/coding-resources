#include <stdio.h>
#include "prototypes.h"
// #include "checkAccount.c"

#define CUSTOMER_FILE "customers.csv"

// create a struct to store customer information
typedef struct
{
    char name[50];
    char accountNumber[10];
    int pin;
    int age;
    long int phoneNumber;
    double balance;
} Customer;

void openAccount()
{
    FILE *file = fopen(CUSTOMER_FILE, "a");
    if (file == NULL)
    {
        printf("Error while opening the file");
        return;
    }
    // initialize the struct
    Customer customer;

    printf("Enter your name\n");
    scanf(" %[^\n]", customer.name);

    printf("Enter your account number\n");
    scanf("%s", customer.accountNumber);

    // if (checkAccountNumber(customer.accountNumber))
    // {
    //     printf("Account already exists\n");
    // }

    printf("Enter your pin\n");
    scanf("%d", &customer.pin);

    printf("Enter your age\n");
    scanf("%d", &customer.age);

    printf("Enter your phone number\n");
    scanf("%ld", &customer.phoneNumber);

    printf("Enter your balance\n");
    scanf("%lf", &customer.balance);

    fprintf(file, "%s, %s, %d, %d, %ld, %lf\n",
            customer.name,
            customer.accountNumber,
            customer.pin,
            customer.age,
            customer.phoneNumber,
            customer.balance);
    fclose(file);
    printf("Account opened successively");
}

void checkBalance()
{
    FILE *file = fopen(CUSTOMER_FILE, "r");
    if (file == NULL)
    {
        printf("Error while opening the file");
        return;
    }

    char AccountEntered[10];

    printf("Enter your account number\n");
    scanf("%s", AccountEntered);

    Customer customer;
    int found = 0;

    // Reset file pointer to the beginning of the file
    rewind(file);

    while (fscanf(file, "%[^,], %s, %d, %d, %ld, %lf\n",
                  customer.name,
                  customer.accountNumber,
                  &customer.pin,
                  &customer.age,
                  &customer.phoneNumber,
                  &customer.balance) != EOF)

    {
        if (customer.accountNumber == AccountEntered)
        {
            printf("Dear %s, your balance for account number %s is %.2lf\n",
                   customer.name,
                   customer.accountNumber,
                   customer.balance);

            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Bank details for account number %s not found\n", AccountEntered);
    }

    fclose(file);
}
void depositFunds()
{
    printf("Dear customer, deposit successful");
}
void withdrawFunds()
{
    printf("Withdrawal was successful");
}
void transferFunds()
{
    printf("Money transfer was successful");
}
