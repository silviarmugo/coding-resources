#include <stdio.h>

const float UGX_EXCHANGE_RATE = 160.50;
const float TZS_EXCHANGE_RATE = 3818.44;
const float KES_EXCHANGE_RATE = 2542.77;

// function prototype
float getinput();
float convertToUgx(float amount);
float convertToTzs(float amount);
float convertToKes(float amount);
void displayResults(float amount, float resultsUgx, float resultsTzs, float resultsKes);

int main()
{
    float amount, resultTzs, resultUgx, resultKes;
    char currency;
    amount = getinput();

    resultTzs = convertToTzs(amount);
    resultUgx = convertToUgx(amount);
    resultKes = convertToKes(amount);

    // display results
    displayResults(amount, resultTzs, resultUgx, resultKes);

    return 0;
}

float getinput()
{
    float amount;
    char currency;

    printf("Please enter the amount in US Dollars\n");
    scanf("%f", &amount);
    printf("Please select currency to convert to\n1. UGX\n2. TZS\n3. KES\n");
    scanf("%s", &currency);
    return amount;
}

float convertToUgx(float amount)
{
    return amount * UGX_EXCHANGE_RATE;
}

float convertToTzs(float amount)
{
    return amount * TZS_EXCHANGE_RATE;
}

float convertToKes(float amount)
{
    return amount * KES_EXCHANGE_RATE;
}

void displayResults(float amount, float resultUgx, float resultTzs, float resultKes)
{
    printf("The %.2f amount in dollars is equivalent to:\n", amount);
    printf("%.2f in Tanzanian Shillings\n", resultTzs);
    printf("%.2f in Ugandan Shillings\n", resultUgx);
    printf("%.2f in Kenyan Shillings\n", resultKes);
}
