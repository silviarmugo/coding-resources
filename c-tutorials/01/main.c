#include <stdio.h>

int main()
{
    int salary = 2000;
    if (salary <= 10000)
    {
        printf("low income");
    }
    else if (salary > 10000 && salary <= 20000)
    {
        printf("Still low income\n");
    }
    else if (salary > 20000 && salary <= 30000)
    {
        printf("middle income\n");
    }
    else if (salary > 30000)
    {
        printf("High income\n");
    }
    else
    {
        printf("I dont know\n");
    }
    return 0;
}