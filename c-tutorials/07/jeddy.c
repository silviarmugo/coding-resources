#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define KSH_EXCHANGE_RATE 160.50
#define TZS_EXCHANGE_RATE 2525.00
#define UGX_EXCHANGE_RATE 3818.44

float usdToKsh(float amount);
float usdToTzs(float amount);
float usdToUgx(float amount);

int main()
{
    float amount, value;
    char currency[4];

    printf("Enter the amount in USD: ");
    scanf("%f", &amount);

    printf("Enter the currency code to convert to (KSH, TZS, UGX): ");
    scanf("%s", currency);

    if (strcmp(currency, "KSH") == 0)
    {
        value = usdToKsh(amount);
    }
    else if (strcmp(currency, "TZS") == 0)
    {
        value = usdToTzs(amount);
    }
    else if (strcmp(currency, "UGX") == 0)
    {
        value = usdToUgx(amount);
    }
    else
    {
        printf("You entered an invalid currency code.\n");
        exit(0);
    }

    printf("The amount in %s is %.2f\n", currency, value);

    ​

        return 0;
}

float usdToKsh(float amount)

{

    return (amount * KSH_EXCHANGE_RATE);
}

​

    float
    usdToTzs(float amount)

{

    return (amount * TZS_EXCHANGE_RATE);
}

​

    float
    usdToUgx(float amount)

{

    return (amount * UGX_EXCHANGE_RATE);
}
