//.6. WAPC to input two numbers and swap them without using a third variable.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping (without third variable), the numbers are:\na = %d\nb = %d", a, b);
    return 0;
}