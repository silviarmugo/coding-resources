#include <stdio.h>

int main()
{
    int a = 10, b = 8, c = 3, d = 7;
    int result = a + b;
    int subtract = a - b;
    int multiplication = a * b;
    float division = a / b;
    int modulus = a % b;
    int increment = ++a;
    int decrement = --b;
    int presedence = (a + b) * (c + d);

    printf("Addition: %d\n", result);
    printf("Subtraction: %d\n", subtract);
    printf("Multiplication: %d\n", multiplication);
    printf("division: %f\n", division);
    printf("Modulus: %d\n", modulus);
    printf("Increment: %d\n", increment);
    printf("Decrement: %d\n", decrement);
    printf("Presedence: %d\n", presedence);

    return 0;
}