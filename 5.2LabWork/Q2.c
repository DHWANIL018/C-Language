// Shree Ganeshay namah 

#include <stdio.h>

int main() {
    int num1 = 8, num2 = 3, num3 = 12, num4 = 7, max;

    // Taking input
    

    // Finding maximum using nested if-else
    if (num1 > num2) {
        if (num1 > num3) {
            if (num1 > num4) {
                max = num1;
            } else {
                max = num4;
            }
        } else {
            if (num3 > num4) {
                max = num3;
            } else {
                max = num4;
            }
        }
    } else {
        if (num2 > num3) {
            if (num2 > num4) {
                max = num2;
            } else {
                max = num4;
            }
        } else {
            if (num3 > num4) {
                max = num3;
            } else {
                max = num4;
            }
        }
    }

    // Printing the maximum value
    printf("The maximum value is: %d\n", max);
    
    return 0;
}
