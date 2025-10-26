//3. WAPC to input five integers from the user. Calculate and print the average.

#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5;
    float avg;
    printf("Enter five integers:\n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    avg = (n1 + n2 + n3 + n4 + n5) / 5.0;
    printf("The average of the five integers is:\n%.2f", avg);
    return 0;
}