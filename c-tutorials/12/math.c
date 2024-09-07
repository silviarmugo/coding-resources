#define _USE_MATH_DEFINES // Define this before including <math.h> to access math constants like M_PI
#include <stdio.h>
#include <math.h>

int main()
{
    double angle_degrees = 30.0;                           // Example angle in degrees
    double angle_radians = angle_degrees * (M_PI / 180.0); // Convert degrees to radians
    double sin_value = sin(angle_radians);                 // Calculate sine

    printf("Sine of %.2f degrees is %.4f\n", angle_degrees, sin_value);

    return 0;
}
