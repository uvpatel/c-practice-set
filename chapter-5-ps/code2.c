/*2. Write a function to convert Celsius temperature into Fahrenheit.*/


#include <stdio.h>

int main(){
    float converstion(float celsius);
    {
    float celsius;
    printf("Enter celsius: ");
    scanf("%f",&celsius);
    printf("The fahrenhight of given celsius:%f",(9*celsius)/5 + 32);
    return 0;
    }
    float x;
    printf("Enter celsius: ");
    scanf("%f",&x);
    converstion(x);
}