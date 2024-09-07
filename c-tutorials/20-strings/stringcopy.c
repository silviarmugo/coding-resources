#include <stdio.h>
#include <string.h>

int main(void)
{
    char firstName[40];
    char lastName[20];

    printf("Enter the first name");
    scanf("%s", firstName);

    printf("Enter the last name");
    scanf(" %s", lastName);

    strcat(firstName, lastName);
    printf("Full name is %s", firstName);

    return 0;
}