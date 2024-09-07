#include <stdio.h>

// Function prototypes
double convertToKES(double amount);
double convertToUGX(double amount);
double convertToTZS(double amount);

int main()
{
    double amount;
    int choice;

    // Accept amount in USD from the user
    printf("Enter amount in USD: ");
    scanf("%lf", &amount);

    // Display menu for currency selection
    printf("\nSelect target currency:\n");
    printf("1. KES (Kenyan Shilling)\n");
    printf("2. UGX (Ugandan Shilling)\n");
    printf("3. TZS (Tanzanian Shilling)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Perform conversion based on user's choice
    switch (choice)
    {
    case 1:
        printf("\n%.2f USD is %.2f KES\n", amount, convertToKES(amount));
        break;
    case 2:
        printf("\n%.2f USD is %.2f UGX\n", amount, convertToUGX(amount));
        break;
    case 3:
        printf("\n%.2f USD is %.2f TZS\n", amount, convertToTZS(amount));
        break;
    default:
        printf("\nInvalid choice!\n");
        break;
    }

    return 0;
}

// Function to convert USD to KES
double convertToKES(double amount)
{
    return amount * 111.30; // Exchange rate as of January 2022
}

// Function to convert USD to UGX
double convertToUGX(double amount)
{
    return amount * 3543.58; // Exchange rate as of January 2022
}

// Function to convert USD to TZS
double convertToTZS(double amount)
{
    return amount * 2312.97; // Exchange rate as of January 2022
}