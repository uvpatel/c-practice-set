//  Gst

#include <stdio.h>

float finalPrize(float x);
int main(){
    float x;
    printf("Enter prize: ");
    scanf("%f",&x);
    printf("The final prize is: %f", x + (0.18*x));
    return 0;
}

float finalPrize(float x){
    return finalPrize(x);

}