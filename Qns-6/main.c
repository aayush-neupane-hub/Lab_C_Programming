// Question-6: Write a program to illustrate implicit and explicit type conversion.
#include <stdio.h>

int main() {

    int a;

    printf("Enter any an integer number:");
    scanf("%d", &a);


    //Implicit type conversion 
    printf("Implicite type conversion:\n In this method datatype of variable automatically converts to another datatype by compiler.\n");
    printf("The value of %d + 7.5 is %f\n",a, a+7.5);


    //Explicit type conversion
    printf("\nExplicit type conversion:\n In this method, conversion occurs manually by the programmer using type casting.\n");
    printf("The value of (float)%d is %f \n", a, (float)a);


    return 0;
}