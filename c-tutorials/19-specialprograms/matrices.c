#include <stdio.h>

int main(void)
{

    int rows = 5;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}