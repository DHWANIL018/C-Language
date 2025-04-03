// Shree Ganeshay namah 

#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30, min;

    // Taking input
    

    // Finding minimum using ternary operator
    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    // Printing the minimum value
    printf("The minimum value is: %d\n", min);

    // int a = 30,b  = 40;
    // int min;

    // min = (a > b) ? (min = b) : ( min = a);

    // printf("%d",min);
    // return 0;
}
