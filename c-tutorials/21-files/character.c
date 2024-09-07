#include <stdio.h>

int main(void)
{
    int character;
    FILE *file;

    file = fopen("names.txt", "a");
    if (file == NULL)
    {
        printf("Error opening the file");
        return 1;
    }
    while ((character = fgetc(file)) != EOF)
    {
        printf("%c", character);
    }
    fclose(file);
    return 0;
}