#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50];

    printf("Enter your name\n");
    fgets(name, sizeof(name), stdin);

    size_t length = strlen(name);

    printf("Hi %s", name);
    printf("length is %ld", length);

    return 0;
}