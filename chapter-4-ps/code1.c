// 1. Write a program to print multiplication table of a given number n
#include <stdio.h>

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    for (int i = 0; i < 11; i++)
    {  
    int mul = n*i;
    printf("%d X %d = %d\n",n,i,mul);
    }
    
    return 0;
}