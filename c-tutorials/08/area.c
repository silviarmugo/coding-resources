#include <stdio.h>

#define PI 3.142

// function prototypes
float calculateArea(float radius);
int main()
{
    float radius, area;

    printf("Enter the radius:");
    scanf(" %f", &radius);
    // calling the function
    area = calculateArea(radius);

    printf("The area of a circle with radius %.3f is %.3f:", radius, area);

    return 0;
}
float calculateArea(float radius)
{
    return PI * radius * radius;
}
