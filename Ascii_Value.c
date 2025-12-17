/*
Write a program in c language to ascii value of character
*/
                                        // SOLUTION

#include<stdio.h>
int main(){
    char c;
    printf("Enter a character here : ");
    scanf("%c",&c);
    printf("ASCII value of character %c : %d",c,c);
    return 0;
}