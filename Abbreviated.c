/*
Write a program in c language to give abbreviated name of given name by user
*/

                                            // SOLUTION

#include<stdio.h>
int main(){
    char f[20], m[20], l[20];
    printf("Enter a full name here : ");
    scanf("%s%s%s", f, m, l);
    //print abbreviated name
    printf("Your abbreviated name is : %c%c%c", f[0],m[0],l[0]);
    return 0;
}