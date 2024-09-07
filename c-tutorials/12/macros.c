#include <stdio.h>

#define HAS_GREETING
#ifndef HAS_GREETING
#define GREET() printf("Hello World\n")
#else
#define GREET() printf("No greeting\n")
#endif

int main()
{

    GREET();

    return 0;
}
