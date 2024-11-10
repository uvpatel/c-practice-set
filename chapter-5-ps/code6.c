/*6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.*/

#include <stdio.h>

int main(){
    int table(int n);{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int i = 1;
    // int mul = n * i; 
    while (i<11)
    {
    printf("%d X %d = %d\n",n,i,n*i);
    i++;
    }
    return 0;
    }
}