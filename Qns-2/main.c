// Question-2: Write a C program to read two integers from the user and display their sum, difference, and product.

#include <stdio.h>

int main() {
    int num1, num2, sum, difference, product;

    
    // Read two integers from the user
    printf("Enter the first integer:");
    scanf("%d", &num1);

    printf("Enter the second integer:");
    scanf("%d", &num2);


    // Calculate sum, difference, and product
    sum = num1+num2;
    difference = num1-num2;
    product = num1*num2;


    // Display the results
    printf("Sum: %d\n",sum);
    printf("Difference: %d\n",difference);
    printf("Product: %d\n",product);

    return 0;
}