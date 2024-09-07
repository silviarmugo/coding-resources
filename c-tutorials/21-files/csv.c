#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file = fopen("output.csv", "w");
    if (file == NULL)
    {
        printf("Error opening he file");
        exit(1);
    }

    fprintf(file, "Name, Age, Gender\n");
    fprintf(file, "Basil Ndonga, 35, male\n");
    fprintf(file, "Steven Kajuang, 38, male\n");
    fprintf(file, "Silviar Mugo, 19, female\n");
    fprintf(file, "Jossy Nzila, 29, female\n");

    fclose(file);

    return 0;
}