// Shree Ganeshay Namah 

#include <stdio.h>
int main(){

    int Num ;

    printf("Enter a 4 digit number : ") ;
    scanf("%d",&Num) ;

  if(Num < 1000 || Num > 9999){
        printf("Please enter a valid 4 digit number") ;
        return 0 ;
    }else{
        int sum = 0 ;
        int digit ;

        while(Num > 0){
            digit = Num % 10 ;
             printf("Digit is : %d\n",digit) ;
            sum += digit ;
            Num = Num / 10 ;
            printf("Num is : %d\n",Num) ;
        }

        printf("Sum of digits is : %d",sum) ;
    }
    

    return 0 ;
}