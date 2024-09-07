#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file = fopen("output.csv", "r");

    // buffer for reading each line from the file
    char buffer[100];

    if (file == NULL)
    {
        printf("Error opening the file");
        exit(1);
    }
    char name[50], gender[10];
    int age;

    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        sscanf(buffer, "%[^,], %d, %[^\n]", name, &age, gender);
        printf("Name: %s, Age: %d, Gender: %s\n", name, age, gender);
    }

    fclose(file);

    return 0;
}