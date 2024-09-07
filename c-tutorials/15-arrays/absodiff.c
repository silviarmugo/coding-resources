#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

// function prototypes
int solution(int items[SIZE][SIZE]);

int main(void)
{

    int items[SIZE][SIZE] = {
        {1, 4, 3},
        {4, 5, 6},
        {9, 8, 9}};

    printf("%d\n", solution(items));

    return 0;
}

int solution(int items[SIZE][SIZE])
{

    int sum1, sum2 = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum1 += items[i][i];
        sum2 += items[i][SIZE - i - 1];
    }
    return abs(sum1 - sum2);
}