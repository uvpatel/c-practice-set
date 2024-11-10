/*Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8. (consider 8 x 1 to 8 x 10).*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int i = 1;
    while (i<n)
    {   int mul = n*i;

        int sum = mul + mul;
        printf("The sum is: %d\n",sum);
        i++;
    }
    
    return 0;
}