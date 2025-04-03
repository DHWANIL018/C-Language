// Shree Ganeshay namah 

// Write a Program to Find if a given numer is neutral or not using a ladder if else. 

#include <stdio.h>

int main(){

    int num1; 

    printf("Enter Number 1 ");
    scanf("%d",&num1);

    if(num1 > 0){
        printf("%d Number is Positive",num1);
    }else if(num1 < 0){
        printf("%d Number is Negative",num1);
    }else{
        printf("%d Your Number is Nutral",num1);
    }

    return 0 ;
}