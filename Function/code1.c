//  sum funtion

#include <stdio.h>

float sum(float x,float y);
int main(){
    float x,y;
    printf("Enter first number: ");
    scanf("%f",&x);
    printf("Enter second number: ");
    scanf("%f",&y);

    printf("The sum of number is : %f",x+y);
    
    return 0;
}

float sum(float x,float y){
    return x+y;
    
}
