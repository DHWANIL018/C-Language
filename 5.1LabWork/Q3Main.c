// Shree Ganeshay namah 

#include<stdio.h>

int main(){

    int maths = 90,english =  82,science = 78 ;
    int sum ;
    float average;

    sum = maths + english + science;

    average = sum / 3.0;

    // printf("%.2f",average);
    printf("Your Total Mark Is %d and Average Is %.2f",sum,average);


    return 0;
}