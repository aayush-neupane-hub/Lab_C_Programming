// Question-10:Write a program to perform basic arithmetic operations (addition, subtraction, multiplication, division) using the switch statement.
// The user should choose an operation from a menu.

#include <stdio.h>

int main()
{
    int num1, num2, choice;

    // Taking input from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);


    //choice of operation
    printf("Choose an operation(+, -, *, /): ");
    scanf("%d", &choice);

    // Performing the operation on the basic of user choice of operation using switch statement
    switch(choice){
        case "+":
            printf("Result: %d\n", num1 + num2);
            break;
    
        case "-":
            printf("Result: %d\n", num1 - num2);
            break;
        case "/":
            if(num2 != 0)
            {
                printf("Result: %d\n", num1 / num2);
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
    
        case "*":
            printf("Result: %d\n", num1 * num2);
            break;
    }

    return 0;
}