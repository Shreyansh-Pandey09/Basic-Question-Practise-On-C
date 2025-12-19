/*
write a program in c language to find the size of data types.
*/

                                        // SOLUTION

#include<stdio.h>
int main(){
    int i;
    float f;
    char c;

    printf("Size of %zu bytes \n",sizeof(i));
    printf("Size of %zu bytes \n",sizeof(f));
    printf("Size of %zu bytes \n",sizeof(c));
    return 0;
}