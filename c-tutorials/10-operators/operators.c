#include <stdio.h>

int main()
{
    int a = 5;
    printf("Preincrement: %d\n", ++a);
    printf("Postincrement: %d\n", a++);

    printf("Print a: %d\n", a);

    for (int i = 0; i <= 100; i++)
    {
        printf("%d\t", i);
    }
    for (int i = 0; i <= 100; ++i)
    {
        printf("%d\t", i);
    }
    return 0;
}