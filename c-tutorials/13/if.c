#include <stdio.h>

int main(void)
{
    int age;

    printf("Enter your age\n");
    scanf("%d", &age);

    if (age < 0)
    {
        printf("Age cannot be negative\n");
    }
    else if (age >= 0 && age <= 3)
    {
        printf("You are a toddler\n");
    }
    else if (age > 4 && age <= 10)
    {
        printf("You are a child\n");
    }
    else if (age > 11 && age <= 19)
    {
        printf("You are a teenager\n");
    }
    else if (age > 20 && age <= 30)
    {
        printf("You are a child\n");
    }
    else if (age >= 31 && age <= 39)
    {
        printf("You are an adult\n");
    }
    else if (age >= 40 && age <= 150)
    {
        printf("You are an ancestor\n");
    }
    else
    {
        printf("Invalid age number\n");
    }

    return 0;
}