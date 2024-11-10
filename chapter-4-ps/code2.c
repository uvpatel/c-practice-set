// 2. Write a program to print multiplication table of 10 in reversed order.

#include <stdio.h>

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    for (int i = 10; 0 < i; i--)
    {  
    int mul = n*i;
    printf("%d X %d = %d\n",n,i,mul);
    }
    return 0;
}