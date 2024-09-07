#include <stdio.h>
#include <stdlib.h>

// function to calculate the diagonal difference
int diagonalDifference(int **matrix, int n)
{
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < n; i++)
    {
        primaryDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][n - i - 1];
    }

    return abs(primaryDiagonalSum - secondaryDiagonalSum);
}

// Function to print the matrix in a readable format
void printMatrix(int **matrix, int n)
{
    printf("The matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main(void)
{
    int n;
    printf("Enter the size of an (n x n) matrix");
    scanf("%d", &n);

    // dynamically allocate memory for the matrix
    int **matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    // input the marix elements
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    printMatrix(matrix, n);

    int result = diagonalDifference(matrix, n);
    printf("The diagonal difference is: %d\n", result);

    // free the allocated memory
    for (int i = 0; i < n; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
