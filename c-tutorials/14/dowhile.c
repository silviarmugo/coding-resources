#include <stdio.h>

int main(void)
{

    int count = 1;

    do
    {
        printf("%d", count);
        count++;
    } while (count <= 5);

    return 0;
}