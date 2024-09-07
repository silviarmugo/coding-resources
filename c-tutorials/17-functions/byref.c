#include <stdio.h>

int square(int *num);
int main(void)
{

    int num = 5;
    printf("Original value is %d\n", num);

    square(&num);
    printf("Final value is %d\n", num);

    return 0;
}

int square(int *num)
{
    *num = *num * *num;
    return *num;
}