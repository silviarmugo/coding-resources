#include <stdio.h>

int main()
{

    char buf[50];
    int a = 15, b = 25, result;
    result = a + b;

    sprintf(buf, "sum is %d", result);
    printf("%s\n", buf);

    return 0;
}
