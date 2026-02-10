// Question-5: Write a program to illustrate different format specifications for printing integer numbers, floating point numbers, and strings.

#include <stdio.h>

int main() {
    int num = 123456;
    float flo = 12345.6789;
    char str[] = "BHUWAN AWASTHI";


    // Integer format specifications
    printf("Integer Formats:\n");
    printf("Default (%%d): %d\n", num);               // 123456
    printf("Align right (%%10d): %10d\n", num);               //      123456
    printf("Align left (%%-10d): %-10d\n", num);              // 123456
    printf("Zero-padded (%%010d): %010d\n", num);           // 0000123456


    // Floating point format specifications
    printf("\nFloating Point Formats:\n");
    printf("Default (%%f): %f\n", flo);               // 12345.678900
    printf(" (%%.2f): %.2f\n", flo);         // 12345.68
    printf("Align right (%%10.2f): %10.2f\n", flo);         //   12345.68
    printf("Align left (%%-10.2f): %-10.2f\n", flo);        // 12345.68


    // String format specifications
    printf("\nString Formats:\n");
    printf("Default (%%s): %s\n", str);               // Aayush Neupane
    printf("Precision (%%.5s): %.5s\n", str);             // Aayus
    printf("Align right (%%20s): %20s\n", str);              //      Aayush Neupane
    printf("Align left (%%-20s): %-20s\n", str);             // Aayush Neupane

    
    return 0;
}