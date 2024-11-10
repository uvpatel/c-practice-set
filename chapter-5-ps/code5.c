/*5. What will the following line produce in a C program:
int a = 4;
printf("%d %d %d \n", a, ++a, a++);
*/

// a print 4
// ++a print 5
//a++ print 4 

#include <stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d \n", a , ++a,a++);
    return 0;
}