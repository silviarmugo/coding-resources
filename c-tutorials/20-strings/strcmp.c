#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char fruits[] = "apple,oranges,bannas,grapes";
    char delimeters[] = ",";
    char *token = strtok(fruits, delimeters);

    // traverse the token
    while (token != NULL)
    {
        printf("Token is : %s");
        token = strtok(NULL, delimeters);
    }

    return 0;
}