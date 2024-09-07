#include <stdio.h>

int main()
{
    char letter = 'b';
    char name[] = "Basil";
    short int age = 18;
    double salary = 23500.5678256898;
    

    printf("%s is %d years old and earns %.2f\n", name, age, salary);

    return 0;
}