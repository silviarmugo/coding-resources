#include <stdio.h>

// function prototype
int fib(int n);

int main(void)
{
    int n;
    printf("%d\n", fib(10));

    return 0;
}

int fib(int n)
{
    // base case of the recursion
    if (n <= 1)
    {
        return n;
    }
    else
    // the recursive case
    {
        return fib(n - 1) + fib(n - 2);
    }
}