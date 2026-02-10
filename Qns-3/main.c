// Question-3: Write a C program to calculate simple interest using appropriate variables and data types [ Hint: I=PTR/100 ].

#include <stdio.h>

int main() {
    int principal, time;
    float rate, interest;

    // Read principal, time, and rate from the user
    printf("Enter the principal amount:");
    scanf("%d", &principal);

    printf("Enter the time (in years):");
    scanf("%d", &time);

    printf("Enter the rate of interest:");
    scanf("%f", &rate);


    // Calculate simple interest
    interest = (principal * time * rate)/100;


    // Display the result
    printf("The simple interest is %.2f\n", interest);

    return 0;
}