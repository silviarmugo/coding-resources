#ifndef PROTOTYPES_H
#define PROTOTYPES_H
#endif

#include <stdio.h>
#include "libs/calculate.c"

int main()
{
    int num1 = 5, num2 = 10;
    printf("The sum is %d\n", sum(num1, num2));

    printf("The difference is %d\n", difference(num1, num2));

    printf("The product is %d\n", product(num1, num2));

    return 0;
}
