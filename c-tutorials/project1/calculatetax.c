#include <stdio.h>

float calculateTax(float income);
int main()
{
    float tax = 0.30;
    float amount = 500000.00;
    float taxAmount = calculateTax(amount);

    printf("Taxable amount is %.2f\n", taxAmount);

    return 0;
}
float calculateTax(float income)
{
    float tax = 0.16;
    return tax * income;
}