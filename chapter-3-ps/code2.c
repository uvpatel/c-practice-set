/*2. Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.*/

#include<stdio.h>

int main(){
    float Phy,Chem,Maths,persentage;
    printf("Enter Physics Marks: ");
    scanf("%f",&Phy);
    printf("Enter Physics Marks: ");
    scanf("%f",&Chem);
    printf("Enter Physics Marks: ");
    scanf("%f",&Maths);
    persentage = (Phy+Chem+Maths)/3;

    if(persentage<40){
    printf("You are fail");
    }
        else if(Phy || Maths || Chem <33){
            printf("You are fail in one subject");
        }
        else if(Phy && Maths <33){
            printf("You are fail in 2 subject");
        }
        else if(Phy && Chem <33){
            printf("You are fail in 2 subject");
        }
        else if(Chem && Maths <33){
            printf("You are fail in 2 subject");
        }
        else if(Phy && Chem && Maths <33){
            printf("you are fail in three subject");
        }
    else{
        printf("You are pass");
    }

}