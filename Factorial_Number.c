/*
Write a program in c language to find factoria number
*/

                                            // SOLUTION

#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("Enter a number here to find its factorial : ");
    scanf("%d", &n);
    if(n<0){
        printf("factorial of negative number not exist");
    }
    else if(n==0){
        fact =1;
        printf("factorial is : %d", fact);
    }
    else{
        for(i=n; i>0; i--){
            fact = fact*i;
        }
        printf("Factorial of %d is : %d",n,fact);
    }
    return 0;

}