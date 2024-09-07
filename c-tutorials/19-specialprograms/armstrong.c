// /*An armstrong number is a number of order n in which each digit when multiplied by itself
// n number of times and finally added together results to the same number.
// Example 371 = 3*3*3 + 7*7*7 + 1*1*1= 27+343+1 = 371.
// To implement this logic in code, you first find out the number of digits (order) in your number.
// Initialize count variable to 0 and quotient = number. While q != 0, find the quotient by dividing
// the number by 10 and then increment the count variable until quotient becomes 0.
// Next, Initialize result = 0 and cnt = count. While quotient != 0, find the modulus of the quotient
// mod = quotient % 10. While cnt != 0, create another mul variable and Initialize it to 1. mul = mul * mod.
// then decrement the cnt variable.
// result = result + mul and quotient = quotient / 10.
// lastly, check if result == number, then the number is an armstrong number, otherwise it isnt an armstrong number.*/

#include <stdio.h>

int main(void)
{
    int count = 0;
    int number, quotient, mod;

    printf("Please enter a number");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("please enter a non negative number");
        return 1;
    }

    quotient = number;
    // this while loop calculates the number of digits in the number and stores it in the count variable
    while (quotient != 0)
    {
        quotient = quotient / 10;
        count++;
    }

    int result = 0;
    quotient = number; // resets quotient to the original number

    // the outer loop finds the remainder
    // while the inner loop multiplies the each digit n number of times
    while (quotient != 0)
    {
        int cnt = count;
        int mul = 1;
        mod = quotient % 10;
        while (cnt != 0)
        {
            mul = mul * mod;
            cnt--;
        }
        result = result + mul;
        quotient = quotient / 10; // moves to the next digit
    }

    if (result == number)
    {
        printf("The number %d is an armstrong number since result is %d\n", number, result);
    }
    else
    {
        printf("The number %d is not an armstrong number since result is %d\n", number, result);
    }

    return 0;
}