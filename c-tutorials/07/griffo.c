#include <stdio.h>

const float USD_KES = 161.35;

const float USD_UGX = 3812.01;

const float USD_TZS = 2521.94;

void usdToKes();

void kesToUsd();

void usdToUgx();

void ugxToUsd();

void usdToTzs();

void tzsToUsd();

int main()
{

    int option;

    printf("Welcome to your currency converter!\n");

    printf("Which conversion you would like to perform?\n");

    printf("1.USD to KES\n2.KES to USD\n3.USD to UGX\n4.UGX to USD\n5.USD to TZS\n6.TZS to USD\n");

    printf("Choose one option from the above :");

    scanf("%d", &option);

    if (option == 1)
    {

        usdToKes();
    }
    else if (option == 2)

    {

        kesToUsd();
    }
    else if (option == 3)

    {

        usdToUgx();
    }
    else if (option == 4)

    {

        ugxToUsd();
    }
    else if (option == 5)

    {

        usdToTzs();
    }
    else if (option == 6)

    {

        tzsToUsd();
    }
    else
    {

        printf("Invalid option!\n");
    }

    return 0;
}

void usdToKes()
{

    float amount;

    float result;

    printf("Enter the amount in USD :");

    scanf("%f", &amount);

    result = amount * USD_KES;

    printf("%.2f USD in KES is %.2f\n", amount, result);
}

void kesToUsd()
{

    float amount;

    float result;

    printf("Enter the amount in KES :");

    scanf("%f", &amount);

    result = amount / USD_KES;

    printf("%.2f KES in USD is %.2f\n", amount, result);
}

void usdToUgx()
{

    float amount;

    float result;

    printf("Enter the amount in USD :");

    scanf("%f", &amount);

    result = amount * USD_UGX;

    printf("%.2f USD in UGX is %.2f\n", amount, result);
}

void ugxToUsd()
{

    float amount;

    float result;

    printf("Enter the amount in UGX :");

    scanf("%f", &amount);

    result = amount / USD_UGX;

    printf("%.2f UGX in USD is %.2f\n", amount, result);
}

void usdToTzs()
{

    float amount;

    float result;

    printf("Enter the amount in USD :");

    scanf("%f", &amount);

    result = amount * USD_TZS;

    printf("%.2f USD in TZS is %.2f\n", amount, result);
}

void tzsToUsd()
{

    float amount;

    float result;

    printf("Enter the amount in TZS :");

    scanf("%f", &amount);

    result = amount / USD_TZS;

    printf("%.2f TZS in USD is %.2f\n", amount, result);
}