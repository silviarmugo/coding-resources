#include <stdio.h>
#include <stdbool.h>

int main()
{
    long int population = 2548882145225;

    int number = 20;

    float pi = 3.142;

    char ch = 'a';

    char name[] = "Basil";

    bool isActive = true;

    printf("The size of an Integer;in bytes is %lu bytes\n", sizeof(number));

    printf("The size of a Long integer: %lu bytes\n", sizeof(population));

    printf("The size of a Float in bytes is : %lu bytes\n", sizeof(pi));

    // printf("%s", sizeof(name));
}