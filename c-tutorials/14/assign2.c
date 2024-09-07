#include <stdio.h>

int main(void)
{

    int rows;

    printf("specify number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= rows; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < rows - i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}