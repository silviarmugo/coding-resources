#include <stdio.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
} Point;
int main()
{
    Point p = {3, 5};
    printf("Point is %d, %d\n", p.x, p.y);

    return 0;
}
