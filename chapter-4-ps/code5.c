// 5. Write a program to sum first n natural numbers using while loop.


#include <stdio.h>

int main(){
   int n,sum = 0;
   printf("Enter number: ");
   scanf("%d",&n);
   for (int i = 0; i <= n; i++)
   {
   sum = sum + i ;
   }
   printf("The sum of n number is: %d ",sum);
    

    return 0;
}