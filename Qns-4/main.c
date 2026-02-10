// Question-4: Write a C program to demonstrate arithmetic, relational, and logical operators.

#include <stdio.h>

int main()
{
    int a, b;

    // Read two integers from the user
    printf("Enter the first integer:");
    scanf("%d", &a);

    printf("Enter the second integer:");
    scanf("%d", &b);

    // Arithmetic Operators
    printf("Arithmetic Operators:\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    if (b != 0)
    {
        printf("%d / %d = %d\n", a, b, a / b);
        printf("%d %% %d = %d\n", a, b, a % b);
    }
    else
    {
        printf("Division and modulus by zero is not allowed.\n");
    }

    // Relational Operators
    printf("\nRelational Operators:\n");
    printf("1 for true \t\t 0 for false\n");
    printf("%d == %d = %d\n ", a, b, a == b);
    printf("%d != %d = %d\n ", a, b, a != b);
    printf("%d > %d = %d\n ", a, b, a > b);
    printf("%d < %d = %d\n ", a, b, a < b);
    printf("%d >= %d = %d\n ", a, b, a >= b);
    printf("%d <= %d = %d\n ", a, b, a <= b);

    // Logical Operators
    printf("\nLogical Operators:\n");
    printf("1 for true \t\t 0 for false\n");
    printf("(%d > 0) && (%d < %d) = %d\n", a, a, b, (a > 0) && (a < b));
    printf("(%d > 0) || (%d < %d) = %d\n", a, a, b, (a > 0) || (a < b));
    printf("%d != %d = %d\n", a, b, a != b);

    return 0;
}