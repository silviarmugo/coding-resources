#include <stdio.h>
#include <string.h>

int main(void)
{

    FILE *file;
    char buffer[100];
    char keyword[20];
    file = fopen("names.txt", "r");
    if (file == NULL)
    {
        printf("Error opening the file");
        return 1;
    }
    printf("enter keyword\n");
    scanf("%s", keyword);

    while (fgets(buffer, 100, file) != NULL)
    {
        if (strstr(buffer, keyword) != NULL)
        {
            printf("found %s\n", buffer);
        }
        else
        {
            printf("Not found");
        }
    }
    fclose(file);
    return 0;
}