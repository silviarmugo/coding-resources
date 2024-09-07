#include <stdio.h>

int main()
{

    // open file for writing
    FILE *file = fopen("example.txt", "w");
    // check if the file exists
    if (file != NULL)
    {
        int num = 42;
        // send the output of the program to a file
        fprintf(file, "The answer is %d", num);
        // close file
        fclose(file);
    }
    return 0;
}