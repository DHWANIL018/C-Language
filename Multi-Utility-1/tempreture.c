// Shree Ganeshay namah 
#include <stdio.h>

int main() {
    float celsius, fahrenheit; 
    
    // Input from user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    // Formula to convert Celsius to Fahrenheit
    fahrenheit = (9.0 / 5) * celsius + 32;

    // Output result
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

return 0;
}