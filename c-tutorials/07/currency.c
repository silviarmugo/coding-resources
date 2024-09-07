#include <stdio.h>

#define USD_KSH 160.50
#define USD_UGX 3810.80
#define USD_TZS 2520.00

int main()
{
    float amount, result;
    int option;

    printf("Please enter amount in USD\n");
    scanf(" %f", &amount);

    printf("Please select currency from the options below:\n");
    printf(" 1.USD to KSH\n 2.USD to UGX\n 3.USD to TZS\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        result = USD_KSH * amount;
        printf("The amount %.2f in USD is equivalent to %.2f in KSH\n", amount, result);
        break;

    case 2:
        result = USD_UGX * amount;
        printf("The amount %.2f in USD is equivalent to %.2f in UGX\n", amount, result);
        break;

    case 3:
        result = USD_TZS * amount;
        printf("The amount %.2f in USD is equivalent to %.2f in TZS\n", amount, result);
        break;

    default:
        printf("Invalid currency option!\n");
        break;
    }
}