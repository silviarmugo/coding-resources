#include <stdio.h>

int main(void)
{
    int matrixA[10][10], transpose[10][10], rows, columns;
    printf("Enter the number of rows and columns");
    scanf("%d %d", &rows, &columns);

    // assign elements to the matrix
    printf("\n Enter the matrix elements \n");
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            printf("Enter the elements of matrix A %d %d: ", i + 1, j + 1);
            scanf("%d", &matrixA[i][j]);
        }
    }
    // printing the entered matrix
    printf("\n Entered matrix \n");
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            printf("%d", matrixA[i][j]);

            if (j == columns - 1)
            {
                printf("\n");
            }
        }
    }

    // computing the transpose
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < columns; ++j)
        {
            transpose[j][i] = matrixA[i][j];
        }
    // computing the transpose
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            printf("%d ", transpose[i][j]);
            if (j == rows - 1)
            {
                printf(" \n");
            }
        }
    }
    return 0;
}