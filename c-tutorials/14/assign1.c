#include <stdio.h>

int main(void)
{

    int rows;

    printf("specify number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k < i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}