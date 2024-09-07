#include <stdio.h>

typedef enum
{
    RED,
    GREEN,
    BLUE,
    ORANGE,
    VIOLET
} COLORS;

int main()
{

    COLORS color;

    color = RED;

    printf("This color is in enum: %d\n", color);

    return 0;
}
