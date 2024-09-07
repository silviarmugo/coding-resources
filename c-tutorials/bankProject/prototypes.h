#ifndef PROTOTYPES_H
#define PROTOTYPES_H

#include <stdbool.h>

// Declare the Customer struct
typedef struct
{
    char name[50];
    char accountNumber[10];
    int pin;
    int age;
    long int phoneNumber;
    double balance;
} Customer;

#define MAX_LEN = 50
#define STUDENT_FILE "customers.csv"
// bool checkAccountNumber(char *AccountEntered);
void openAccount();
void depositFunds();
void withdrawFunds();
void checkBalance();
void transferFunds();

#endif