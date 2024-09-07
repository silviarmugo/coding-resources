#include <stdio.h>

#define SUM(x, y) (x + y)
#define PRODUCT(x, y) (x * y)
#define GREET() printf("Hello World\n")

int main()
{
    int num1 = 27, num2 = 33;
    printf("Sum is %d\n", SUM(num1, num2));
    printf("Product is %d\n", PRODUCT(num1, num2));
    GREET();
    return 0;
}
