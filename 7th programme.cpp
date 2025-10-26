//7. WAPC to input a 4-digit number and find the sum and product of the rightmost and leftmost digits.

#include <stdio.h>

int main()
{
    int num, left, right, sum, product;
    printf("Enter a 4-digit number:\n");
    scanf("%d", &num);
    right = num % 10;
    left = num / 1000;
    sum = left + right;
    product = left * right;
    printf("The sum of the leftmost and rightmost digits is:\n%d", sum);
    printf("\nThe product of the leftmost and rightmost digits is:\n%d", product);
    return 0;
}