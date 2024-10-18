//6. Write a program to find greatest of four numbers entered by the user.

#include<stdio.h>

int main(){
    float number_1,number_2,number_3,number_4;
    printf("Enter number: ");
    scanf("%f",&number_1);
    printf("Enter number: ");
    scanf("%f",&number_2);
    printf("Enter number: ");
    scanf("%f",&number_3);
    printf("Enter number: ");
    scanf("%f",&number_4);
    
    if( (number_1 == number_2)  && (number_1 == number_4) && (number_1 == number_3)){
        printf("All number is same");
    }
    else{
        if(number_1== number_2 && number_1>number_3 && number_1>number_4){
            printf("Number one and two are same and greatest value is:%f",number_1);
        }
        else if(number_2 == number_3 && number_2>number_1 && number_2>number_4){
            printf("Number three and two are same and greatest value is:%f",number_2);
        }
        else if(number_3== number_4 && number_4>number_1 && number_4>number_2){
            printf("Number four and three are same and greatest value is:%f",number_4);
        }
        else if(number_1== number_4 && number_1>number_3 && number_1>number_4){
            printf("Number one and four  are same and greatest value is:%f",number_1);
        }
        else{
            if( number_1>number_2 && number_1>number_3 && number_1 > number_4){
                printf("%f is the greatest number",number_1);
            }
            else if( number_2>number_1 && number_2>number_3 && number_2 > number_4){
                printf("%f is the greatest number",number_2);
            }  
            else if( number_3>number_1 && number_3>number_2 && number_3 > number_4){
                printf("%f is the greatest number",number_3);
            }   
            else if( number_4>number_2 && number_4>number_3 && number_4 > number_1){
                printf("%f is the greatest number",number_4);
            
            }
            else{
                if((number_1 == number_2) && (number_2 == number_3) && (number_1 > number_4)){
                    printf("Number one two and three are same and gretest and value is: %f",number_1);
                }
                else if((number_1 == number_2) && (number_2 == number_4) && (number_1 > number_3)){
                    printf("Number one two and four are same and gretest and value is: %f",number_1);
                }
                else if((number_1 == number_4) && (number_1 == number_3) && (number_1 > number_2)){
                    printf("Number one three and four are same and gretest and value is: %f",number_1);
                }
                else if((number_2 == number_4) && (number_2 == number_3) && (number_2 > number_1)){
                    printf("Number two ,three and four are same and gretest and value is: %f",number_2);
                }
                
            }
        }
    }
    return 0;
}