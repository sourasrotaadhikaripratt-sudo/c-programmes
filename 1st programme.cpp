//1. WAPC to input radius and height of a cylinder. Calculate the volume of the cylinder.


#include <stdio.h>
#define PI 3.142

int main()
{
    float radius, height, volume;
    printf("Enter the radius and height of the cylinder:\n");
    scanf("%f %f", &radius, &height);
    volume = PI * radius * radius * height;
    printf("The volume of the cylinder is:\n%.2f", volume);
    return 0;
}