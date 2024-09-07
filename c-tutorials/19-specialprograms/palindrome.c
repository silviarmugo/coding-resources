// /*A palindrome number is a number or phrase if read backwards is the same
// as if it is read forward, example 1221, 24542, racecar
// In this program we are going to check whether a number is a palindrome
// Remember when you divide a number by 10, the remainder is always the number except the last digit
// and the modulus or remainde is always the last digit
// */
#include <stdio.h>

int main(void)
{
    int number, quotient, mod;
    int result = 0;

    printf("Please enter a number");
    scanf("%d", &number);

    quotient = number;

    while (quotient != 0)
    {
        mod = quotient % 10; // the modulus of a number by 10 is always the last digit
        result = result * 10 + mod;
        quotient = quotient / 10; // the quotient of a number by 10 is always the number except the last digit
    }

    if (number == result)
    {
        printf("The number is a palindrome");
    }
    else
    {
        printf("The number is not a palindrome");
    }

    return 0;
}