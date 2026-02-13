// Question-12:Write a C program to reverse a given number using a while loop.
#include <stdio.h>

int main()
{
    int  num, reversedNum = 0;

    // Input 
    printf("Enter a multi-digit number: ");
    scanf("%d", &num);

    // Reversing the number using while loop
    while (num != 0)
    {
        reversedNum = (reversedNum*10) + (num%10);
        num = num/10;
    }
    
    // Displaying
    printf("\nReversed number is %d", reversedNum);

    return 0;
}