#include <stdio.h>
const float EXCHANGE_RATE = 162.65;

float convert(float amount);
int main()
{
    float amount, result;

    printf("Please enter the amount in US Dollars\n");
    scanf("%f", &amount);

    // calling the convert function
    result = convert(amount);

    printf("The %.2f amount in dollars is equivalent to %.2f in kenyan shillings\n", amount, result);

    return 0;
}
float convert(float amount)
{
    return amount * EXCHANGE_RATE;
}
