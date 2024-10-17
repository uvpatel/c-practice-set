/*1. Write a C program to calculate area of a rectangle:
a. Using hard coded inputs.
b. Using inputs supplied by the user*/

#include <stdio.h>

int main(){
    float lenth,width;
    printf("Enter lenth of rectangle: ");
    scanf("%f",&lenth);
    printf("Enter width of rectangle: ");
    scanf("%f",&width);

    printf("The area of rectangle is: %f",lenth*width);

    return 0;
    

}
