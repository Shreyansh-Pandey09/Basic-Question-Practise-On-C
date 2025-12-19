/*
Wrtite a program in c language for converting celcius into fahrenheit
*/

                                            // SOLUTION

#include<stdio.h>
int main(){
    float c,f;
    printf("Enter temperature in celsius : ");
    scanf("%f", &c);
    f = (c*9/5) + 32;
    printf("Converted temperature in fahrenheit : %f",f);
    return 0;
}