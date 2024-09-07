#include <stdio.h>

#define KSH_EXCHANGE_RATE 143.38
#define TZS_EXHANGE_RATE 2547.78
#define UGX_EXCHANGE_RATE 3931.16

float usdToKsh(float amount);
float usdToUgx(float amount);
float usdToTzs(float amount);

int main()
{

    float amount;
    int option;

    printf("Enter the amount in USD\n");
    scanf(" %f", &amount);

    printf("Select the currency to convert to:\n");
    printf("1. USD TO KSH\n 2. USD TO UGX\n 3. USD TO TZS\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("\n%.2f USD is %.2f KES\n", amount, usdToKsh(amount));
        break;
    case 2:
        printf("\n%.2f USD is %.2f UGX\n", amount, usdToUgx(amount));
        break;
    case 3:
        printf("\n%.2f USD is %.2f TZS\n", amount, usdToTzs(amount));
        break;
    default:
        printf("\nInvalid choice!\n");
        break;
    }

    return 0;
}

float usdToKsh(float amount)
{
    return amount * KSH_EXCHANGE_RATE;
}
float usdToUgx(float amount)
{
    return amount * UGX_EXCHANGE_RATE;
}
float usdToTzs(float amount)
{
    return amount * TZS_EXHANGE_RATE;
}