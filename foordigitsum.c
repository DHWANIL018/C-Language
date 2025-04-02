#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // User input
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    // Extract and sum digits
    while (num > 0) {
        digit = num % 10;  // Get last digit
        sum += digit;      // Add to sum
        num /= 10;         // Remove last digit
    }
  
    
    // Output result
    printf("Sum of digits: %d\n", sum);

    return 0;
}
