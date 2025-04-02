// Shree Ganeshay namah

#include <stdio.h>

int main() {
    float baseSalary, hraPercent, daPercent, taPercent, grossSalary;
    
    // User input
    printf("Enter Base Salary: ");
    scanf("%f", &baseSalary);
    
    printf("Enter HRA percentage: ");
    scanf("%f", &hraPercent);
    
    printf("Enter DA percentage: ");
    scanf("%f", &daPercent);
    
    printf("Enter TA percentage: ");
    scanf("%f", &taPercent);
    
    // Calculation
    grossSalary = baseSalary + (baseSalary * hraPercent / 100) + 
                  (baseSalary * daPercent / 100) + (baseSalary * taPercent / 100);
    
    // Output
    printf("Gross Salary: Rs. %.2f\n", grossSalary);

    return 0;
}