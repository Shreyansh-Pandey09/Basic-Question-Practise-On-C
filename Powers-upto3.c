/*
Write a program in c language to find power of any number upto its three power
*/
                                            // SOLUTION
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a number to find it's power upto 3 : ");
    scanf("%d", &n);
    printf("For power 1 %d^1 : %d\n", n,n*1);
    printf("For power 2 %d^2 : %d\n", n,n*n);
    printf("For power 3 %d^3 : %d\n", n,n*n*n);
    return 0;
}