// Question-13:Write a program to terminate a loop prematurely using break
#include <stdio.h>

int main() {

    // Loop from 1 to 10
    for (int i = 1; i <= 10; i++) {

        // Break the loop when i equals 5
        if (i == 5) {
            printf("Terminating loop at 5.\n");
            break;
        }

        printf("%d\n", i);
    }

    return 0;
}