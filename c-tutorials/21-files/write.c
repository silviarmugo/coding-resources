#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file = fopen("example.txt", "w");
    if (file == NULL)
    {
        printf("Error opening he file");
        exit(1);
    }

    fprintf(file, "Hello world\n");
    fprintf(file, "%s\n", "another one");
    fprintf(file, "%d\n", 100);

    fclose(file);

    return 0;
}