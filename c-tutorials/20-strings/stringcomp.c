#include <stdio.h>
#include <string.h>

int main(void)
{

    char str1[] = "apple";
    char str2[] = "bananas";
    int result = strcmp(str1, str2);

    printf("%d\n", result);

    if (result == 0)
    {
        printf("We found a match\n");
    }
    else
    {
        printf("No match found\n");
    }

    return 0;
}