/*
Write a program in c lanuguage to find percentage of 5 subjects
*/

                                        // SOLUTION

#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5;
    float total, percentage;
    printf("Enter the marks of 5 subjects : ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total = m1+m2+m3+m4+m5;
    percentage = total/5;
    printf("The percentage of 5 sujects are : %f", percentage);
    return 0;
}