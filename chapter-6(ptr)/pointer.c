#include <stdio.h>

int main(){
    int a;
    float b;
    char c ;
    // *  means value at address
    //  & address of variable
    
    printf("Enter a int number: ");
    scanf("%d",&a);
    printf("Enter a float number : ");
    scanf("%f",&b);
    printf("Enter c char: ");
    scanf(" %c",&c);

    int *ptr_a = &a;
    float *ptr_b = &b;
    char *ptr_c = &c;
    // int* ptr = &a;
    // int* a = a;
    printf("\nThe address of a is : %p\n",ptr_a);
    printf("The address of a is : %u\n",ptr_a);

    printf("The address of a is : %p\n",*ptr_a); // this print value at a 
    printf("The address of a is : %p\n",&ptr_a); // this give address of ptr_a 


    printf("The address of b is : %p\n",ptr_b);
    printf("The address of b is : %u\n",ptr_b);

    printf("The address of b is : %p\n",*ptr_b);
    printf("The address of b is : %p",&ptr_b);


    printf("The address of c is : %p\n",ptr_c);
    printf("The address of c is : %u\n",ptr_c);

    printf("The address of c is : %p\n", *ptr_c);  // Dereferencing a char pointer shows the character value, not an address
    printf("The address of c is : %p\n", &ptr_c);  // Correct, this shows the address of the pointer itself

    return 0;
}