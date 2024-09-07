#include <stdio.h>

int main(void)
{
    int sum = 0;

    for (int count = 1; count <= 5; count++)
    {
        sum += count;
        printf("%d\n", count);
    }
    printf("Sum is %d\n", sum);

    return 0;
}