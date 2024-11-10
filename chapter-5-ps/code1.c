// 1. Write a program using function to find average of three numbers.

#include <stdio.h>

int main(){
    float avg(float a,float b);
    {
    float a,b;

    printf("Enter number: ");
    scanf("%f",&a);
    printf("Enter number: ");
    scanf("%f",&b);
    float c = (a+b)/2;
    printf("The avrage of two number is:%f",c);
    return c;
    }
    float x,y;
    printf("Enter number: ");
    scanf("%f",&x);
    printf("Enter number: ");
    scanf("%f",&y);
    avg(x,y);
}