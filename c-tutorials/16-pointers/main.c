#include <stdio.h>

void modify(int *ptr);
void increment(int *ptr);
int multiply(int x, int y, int z);
float calculateHousingLevy(float salary);
int aggregate(int num1, int num2, int num3);

int main(void)
{
    float salary = 80000;
    int age = 10;
    int product;
    int *ptr = &age;
    printf("age before modification is: %d\n", *ptr);
    modify(&age);
    printf("age after modification is: %d\n", *ptr);
    increment(&age);
    printf("age after increment is: %d\n", age);

    printf("product is: %d\n", aggregate(7, 6, 15));

    printf("Shiru's housing levy is %.2f\n", calculateHousingLevy(salary));

    return 0;
}
int aggregate(int num1, int num2, int num3)
{
    return multiply(num1, num2, num3);
}

void modify(int *ptr)
{
    *ptr = 20;
}
void increment(int *ptr)
{
    (*ptr)++;
}
int multiply(int x, int y, int z)
{
    return x * y * z;
}
float calculateHousingLevy(float salary)
{
    float levy = 0.015;
    return levy * salary;
}