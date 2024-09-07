#include <stdio.h>

#define AGE_IN_YEARS 10
const float PI = 3.142;
int main()
{
    int count = 5, age = 11;
    const int X = 10;
    const float PI = 3.142;
    // X = 20;

    count++;
    printf("Pie is %d\n", PI);
    printf("count 1 is %d\n", count);
    count = age++;
    printf("count 2 is %d\n", count);
    age = count + 1;
    printf("age 1 is %d\n", age);
    count = count + age;
    printf("count 3 is %d\n", count);

    printf("count is %d\n", count);
    printf("age is %d\n", age);
    return 0;
}