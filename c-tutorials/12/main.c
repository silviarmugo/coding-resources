#include <stdio.h>

int main()
{

    int num1, num2, result;
    char str[20];

    // puts("Enter the first number");
    // scanf("%d", &num1);
    // puts("Enter the second number");
    // scanf("%d", &num2);

    // result = num1 + num2;

    // printf("The sum is %d\n", result);

    puts("Enter your name");
    fgets(str, sizeof(str), stdin);
    printf("Hi %s\n", str);

    return 0;
}