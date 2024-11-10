// 9. Repeat 8 using while loop.

#include <stdio.h>

int main(){
    int n, factorial= 1;
    printf("Enter number: ");
    scanf("%d" , &n);
    int i = 1;
    while (i<=n)
    {
        factorial *= i;
        i++;
    }
    printf("The factorial of number n :  %d",factorial);
    
    return 0;
}