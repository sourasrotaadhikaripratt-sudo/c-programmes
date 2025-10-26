//5.WAPC to input two integers and display the contents after swapping.

#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping, the numbers are:\na = %d\nb = %d", a, b);
    return 0;
}