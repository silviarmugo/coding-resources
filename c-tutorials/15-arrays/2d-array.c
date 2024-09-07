#include <stdio.h>

int main(void)
{
    int items[3][3];

    // adding elements to the array
    items[0][0] = 300;
    items[0][1] = 301;
    items[0][2] = 302;
    items[1][0] = 310;
    items[1][1] = 311;
    items[1][2] = 312;
    items[2][0] = 320;
    items[2][1] = 321;
    items[2][2] = 322;

    // accessing an element in the array
    printf("%d\n", items[1][0]);

    // iterating through all the elements in the loop
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", items[i][j]);
        }
    }

    int nums[3][3] = {
        {100, 101, 102},
        {200, 201, 202},
        {300, 301, 302}};

    // iterating through all the elements in the loop
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", nums[i][j]);
        }
    }

    return 0;
}