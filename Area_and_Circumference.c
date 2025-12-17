/*
Write a program in c language to find area and circumference of a circle 
*/

                                            //SOLUTION

#include<stdio.H>
int main(){
    int radius;
    float pi=3.14, area, circumference;
    printf("Enter the radius of circle : ");
    scanf("%d", &radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("Area of circle is : %f \n", area);
    printf("Circumference of circle is : %f ", circumference);
    return 0;
}