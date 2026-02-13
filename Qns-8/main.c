// Question-8:Write a program to find the greater of two numbers using if–else.

#include <stdio.h>

int main()
{
    int num1, num2;

    // Taking input frdom user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);

    // Determining the greater number among two using if-else statement
    if (num1 > num2)
    {
        printf("%d is greatest number.\n", num1);
    }
    else if (num2 > num1)
    {
        printf("%d is greatest number.\n", num2);
    }
    else
    {
        printf("Both numbers are equal.\n");
    }

    return 0;
}