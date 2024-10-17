/*2. Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height.*/


#include <stdio.h>

int main(){
    float radius,hight;
    printf("Enter the radius of circle: ");
    scanf("%f",&radius);
    printf("The area of circle is: %f\n",3.14*radius*radius);
    printf("Enter Hight of cylinder: ");
    scanf("%f",&hight);
    printf("Enter radius of cylinder: ");
    scanf("%f",&radius);
    printf("The volume of given cylinder is: %f\n",3.14*radius*radius*hight);

    return 0;

}