#include <stdio.h>
#include <ctype.h>
// #include <stdbool.h>

int main()
{
    char name[10] = "Stephen";
    // bool isActive = true;

    for (int i = 0; i < 7; i++)
    {
        printf("%c", toupper(name[i]));
    }

    return 0;
}