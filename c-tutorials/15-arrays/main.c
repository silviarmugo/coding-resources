#include <stdio.h>

int main(void)
{

    // declaration and initialization of an array
    int items[5] = {100, 200, 300, 400, 500};

    // accessing an element in the array
    printf("%d\n", items[3]);

    // modifying an element in the array
    items[3] = 700;
    printf("%d\n", items[3]);

    printf("\n\n");

    // accessing all the elements in the array using for loop
    for (int index = 0; index < 5; index++)
    {
        printf("%d\n", items[index]);
    }

    return 0;
}
