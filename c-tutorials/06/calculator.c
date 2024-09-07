#include <stdio.h>
#include <stdlib.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Cannot divide a number by zero\n");
        exit(0);
    }
    return a / b;
}

void calculateAndPrint(float num1, float num2, char sign)
{
    float result;

    switch (sign)
    {
    case '+':
        result = add(num1, num2);
        break;
    case '-':
        result = subtract(num1, num2);
        break;
    case '*':
        result = multiply(num1, num2);
        break;
    case '/':
        result = divide(num1, num2);
        break;
    default:
        printf("Invalid operator\n");
        return;
    }

    printf("%.2f %c %.2f = %.2f\n", num1, sign, num2, result);
}

int main()
{
    float num1, num2;
    char sign;

    printf("Enter the first value: ");
    scanf("%f", &num1);
    printf("Enter the second value: ");
    scanf("%f", &num2);
    printf("Enter sign: ");
    scanf(" %c", &sign);

    calculateAndPrint(num1, num2, sign);

    return 0;
}
