#include <stdio.h>

int main(void)
{

    int count = 1;
    int sum = 0;

    while (count <= 10)
    {
        sum += count;
        printf("%d\n", count);
        count++;
    }
    printf("%d\n", sum);

    return 0;
}