//10. WAPC to find the simple interest based on user inputs.

#include<stdio.h>
int main()
{
    float principal, rate, time, simpleInterest;
    printf("\nEnter principal amount, rate of interest and time:\n");
    scanf("%f %f %f", &principal, &rate, &time);
    simpleInterest = (principal * rate * time) / 100;
    printf("\nThe Simple Interest is %.2f\n", simpleInterest);
    return 0;
}
