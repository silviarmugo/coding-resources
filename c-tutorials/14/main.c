#include <stdio.h>

int main()
{

    int rows, cols;

    printf("Specify the number of rows: ");
    scanf("%d", &rows);

    printf("Specify the number of columns: ");
    scanf("%d", &cols);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == cols)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}