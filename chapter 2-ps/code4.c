// 4. Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1


/*
left to right associativity and precidence
3*2/3 - 3 + 1
2-2
0
*/

#include<stdio.h>

int main(){
    printf("The value:%d",3*2/3 - 3 + 1);
    return 0;
}