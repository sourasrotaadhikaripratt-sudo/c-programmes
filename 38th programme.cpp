//38. WAPC to input a positive integer.     Check and print if the number is perfect or not.

#include<stdio.h>

int main()
{
    int num, i, sum = 0;

    printf("\nEnter a positive integer: ");
    scanf("%d", &num);

    
    for(i = 1; i < num; i++)
    {
       if(num % i == 0)
        {
            sum = sum + i;  
        }
    }

    if(sum == num)
        printf("\n%d is a perfect number.", num);
    else
        printf("\n%d is not a perfect number.", num);

    return 0;
}