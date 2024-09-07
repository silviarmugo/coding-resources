#include <stdio.h>

int main(void)
{

    int num = 1;
    int sum = 0;
    while (num <= 100)
    {
        sum += num;
        num += 2;
        printf("%d", num);
    }

    printf("The sum of the numbers is %d\n", sum);

    return 0;
}