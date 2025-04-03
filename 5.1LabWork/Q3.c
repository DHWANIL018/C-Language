// Shree Ganeshay namah 
#include <stdio.h>

int main(){

    int Maths,English,SS,sum;
    float average;
    printf("Enter Maths , English , SS Subject marks : ");
    scanf("%d %d %d",&Maths,&English,&SS);

    if(Maths > 100 || English > 100 || SS > 100){
        printf("Invalid input! Marks should be between 0 and 100.\n");
    }else{
        sum = Maths + English + SS;

        average = sum / 3;

        printf("Your Total Marks Is %d\n",sum);
        printf("Your average Marks Is %.2f",average);

    }
   

    return 0 ;
}