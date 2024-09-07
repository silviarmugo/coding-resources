#include <stdio.h>

int main(void)
{
    unsigned int i = 500;
    while (i++ != 0)
        ;

    printf("%d\n", i);

    return 0;
}