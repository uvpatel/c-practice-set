// 6. Write a program to implement program 5 using 'while’ and ‘do-while’ loop

#include <stdio.h>\

int main(){
    int n,sum = 0;
    printf("Enter number: ");
    scanf("%d",&n);
    int i = 0;
    // while (i<=n){
    //  sum = sum + i;
    //     i++;
    // }
    // printf("The sum of n number is: %d\n",sum);
    
    return 0;

    do{
    sum = sum + i;
    i++;
    }while (i<=n);
    printf("The sum of n number is: %d",sum);
    
}