/*4. Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest.*/


#include<stdio.h>

int main(){
    float principal,rate, time,S_I;
    printf("Enter amount: ");
    scanf("%f",&principal);
    printf("Enter rate: ");
    scanf("%f",&rate);
    printf("Enter time(years): ");
    scanf("%f",&time);
    S_I = principal*time*rate;
    printf("The simple intreset of given values is: %f",S_I);
    return 0;

}