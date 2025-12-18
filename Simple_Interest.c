/*
Write a program in c language to find out simple interest
*/

                            // SOLUTION
#include<stdio.h>
int main(){
    float p,r,t,si;
    printf("Enter principle, rate and time : ");
    scanf("%f%f%f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("Your simple interest is : %f", si);
    return 0;
}