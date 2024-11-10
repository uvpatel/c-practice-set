/*3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s2*/

#include<stdio.h>

int main(){
    float force (float mass,float acclaration);{
        float mass,acclaration,force;
        printf("Enter mass: ");
        scanf("%f",&mass);
        printf("Enter acclaration: ");
        scanf("%f",&acclaration);
        // force = mass*acclaration;
        printf("The force is: %f",mass*acclaration);

}
    return 0;
}