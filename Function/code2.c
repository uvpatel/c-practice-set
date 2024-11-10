// function for print tables


#include <stdio.h>
void table(int n,int i);
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
    
    
    
    return 0;
}

void table(int n,int i){
    return;
}