/*Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
 Income Slab Tax
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30% 
 */

#include <stdio.h>

int main(){
    float income;
    printf("Enter Your income: ");
    scanf("%f",&income);
    
    if(250000.0 < income<=500000.0){
        printf("Your tax is: %f",income*0.05);
    }
    else if(500000.0 < income <= 1000000.0){
        printf("Your tax is: %f",income*0.20);
    } 
    else if(1000000.0 < income){
        printf("Your tax is: %f",income*0.30);
    } 
    else{
        printf("Your tax is 0");
    }

    return 0;
}