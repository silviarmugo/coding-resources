#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, result;
    char sign;

    printf("Enter the first value: ");
    scanf("%f", &num1);
    printf("Enter the second value: ");
    scanf("%f", &num2);
    printf("Enter sign: ");
    scanf(" %c", &sign);

    if (sign == '+')
    {
        result = num1 + num2;
    }
    else if (sign == '-')
    {
        result = num1 - num2;
    }
    else if (sign == '*')
    {
        result = num1 * num2;
    }
    else if (sign == '/')
    {
        if (num2 == 0)
        {
            printf("Cannot divide a number by zero\n");
            exit(0);
        }
        else
        {
            result = num1 / num2;
        }
    }
    else
    {
        printf("Invalid operator\n");
    }

    printf("%.2f %c %.2f= %.2f\n", num1, sign, num2, result);

    return 0;
}