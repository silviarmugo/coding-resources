#include <stdio.h>

int main(void)
{
    int age;

    printf("Enter your age\n");
    scanf("%d", &age);

    switch (age)
    {

    case 0 ... 3:
        printf("You are a toddler\n");
        break;
    case 4 ... 10:
        printf("You are a child\n");
        break;
    case 11 ... 19:
        printf("You are a teenager\n");
        break;
    case 20 ... 30:
        printf("You are a young adult\n");
        break;
    case 31 ... 39:
        printf("You are an adult\n");
        break;
    case 40 ... 60:
        printf("You are getting old\n");
        break;
    case 61 ... 150:
        printf("You are an ancestor\n");
        break;
    default:
        printf("Invalid age number\n");
    }

    return 0;
}