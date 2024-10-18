/*4. Write a program to find whether a year entered by the user is a leap year or not.
Take year as an input from the user.*/

#include<stdio.h>
int main(){
int Year;
printf("Enter Year: ");
scanf("%d",&Year);
if(Year%4 == 0){
    printf("%d is Leap year",Year);
}
else{
    printf("%d year is not Leap Year",Year);
}
 }