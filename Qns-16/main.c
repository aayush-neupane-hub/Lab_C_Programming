// Question-13:Write an example program that causes an infinite loop unintentionally (e.g., missing condition update).
#include <stdio.h>

int main() {
    
    int i =1;

    // Loop that causes an infinite loop unintentionally due to missing condition update
    while(i < 10){
        printf("%d \t", i);
                // Missing update condition of i.
    }
   
    return 0;
}