// Question-11:Write a C program to calculate the sum of the first N natural numbers using a for loop.
#include <stdio.h>

int main()
{
   int num, sum = 0;

    // Input from user
    printf("Enter a number:");
    scanf("%d", &num);

    // Calculation of sum of first N natural number using for loop
    for(int i=1; i<=num; i++)
    {
        sum = sum + i;
    }

    return 0;
}