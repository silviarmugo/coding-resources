#include <stdio.h>

void convertUpperCase(char inputString[]);
int main(void)
{
    char inputString[100];

    printf("Enter a string in lowercase: ");
    fgets(inputString, sizeof(inputString), stdin);

    // calling the function
    convertUpperCase(inputString);
    printf("The upper string is %s", inputString);

    return 0;
}
void convertUpperCase(char inputString[])
{
    int i = 0;
    while (inputString[i] != '\0')
    {
        if (inputString[i] >= 'a' && inputString[i] <= 'z')
        {
            // convert using ASCII values
            inputString[i] = inputString[i] - 32;
        }
        i++;
    }
}