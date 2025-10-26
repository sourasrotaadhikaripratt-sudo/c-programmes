//2.WAPC to input the temperature in Celsius and output it in Fahrenheit.

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter the temperature in Celsius:\n");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 1.8) + 32;
    printf("The temperature in Fahrenheit is:\n%.2f", fahrenheit);
    return 0;
}