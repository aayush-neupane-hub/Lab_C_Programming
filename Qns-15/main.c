// Question-13:Write a program to skip specific iterations in a loop using continue.
#include <stdio.h>

int main() {

    // Loop from 1 to 10
    for ( int i = 1; i <= 10; i++){
        // Skip the iteration when i = 5
        if(i == 5){
            printf("Iteration of %d is skipped\n", i);
            continue;
        }
        printf("%d\t", i);
    }
   
    return 0;
}