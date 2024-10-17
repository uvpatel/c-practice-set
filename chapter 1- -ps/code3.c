/*3. Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit).
*/


#include<stdio.h>

int main(){
    float celsius;
    printf("Enter celsius: ");
    scanf("%f",&celsius);
    printf("The amount of Fahrenheit: %f",(9*celsius)/5 + 32);
}