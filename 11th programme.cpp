//12. WAPC to input an integer. Calculate and display the square and cube of the number.

#include<stdio.h>
int main()
{
    int num, square, cube;
    
    printf("\nEnter an integer:");
    scanf("%d", &num);
    
    square = num * num;
    cube = num * num * num;
    
    printf("\nThe square of the number is %d", square);
    printf("\nThe cube of the number is %d", cube);
    return 0;
}