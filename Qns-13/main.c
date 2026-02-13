// Question-13:Write a C program using a do-while loop to find the sum of the digits of  given numbers
#include <stdio.h>

int main()
{
    int num, sum=0;

    // Takin input from user
    printf("Enter a multi-digit number:");
    scanf("%d", &num);

    // Calculating sum of digits using do-while loop
    do{
        sum = sum +(num%10);
        num = num/10;
    }while(num != 0);

    // Displaying the sum of digits
    printf("Sum of digits is %d\n", sum);

    return 0;
}