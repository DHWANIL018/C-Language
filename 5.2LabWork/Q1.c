// Shree Ganeshay namah 

#include <stdio.h>

int main (){

    int First_value, Seconde_value, Third_value;
    printf("enter value First_value =>");
    scanf("\n%d", &First_value);
    printf("enter value Seconde_value =>");
    scanf("\n%d", &Seconde_value);
    printf("enter value Third_value =>");
    scanf("\n%d", &Third_value);

    if (First_value > Seconde_value && First_value > Third_value)
    {
        printf("\nfirst value is maximum number");
    }
    else
    {
        if (Seconde_value > Third_value)
        {
            printf("\nsecond value is maximum number");
        }
        else
        {
            printf("\nthird value is maximum number");
        }
    }
    
    return 0 ;
}
