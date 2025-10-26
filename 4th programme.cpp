//4.WAPC to input the coordinates of two points (x1, y1) and (x2, y2). Calculate the slope and display the same.

#include <stdio.h>

int main()
{
    float x1, y1, x2, y2, slope;
    printf("Enter the coordinates (x1, y1, x2, y2):\n");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
        slope = (y2 - y1) / (x2 - x1);
        printf("The slope of the line is:\n%.2f", slope);
  
    return 0;
}
