#include <stdio.h>

int main()
{
    int age = 35;

    int *ptr = &age;
    printf("%d\n", *ptr);

    *ptr = 38;
    printf("%p\n", &age);

    printf("%d\n", age);
    return 0;
}