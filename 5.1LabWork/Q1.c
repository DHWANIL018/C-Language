// Shree Ganeshay namah 



#include <stdio.h>

int main(){

    int num1,num2;

    printf("Enter Number 1 : ");
    scanf("%d",&num1);

    printf("Enter Number 2 : ");
    scanf("%d",&num2);

    if (num1 > num2) {
        printf("%d is the minimum value\n", num2);
    } else {
        printf("%d is the minimum value\n", num1);
    }

    return 0 ;
}