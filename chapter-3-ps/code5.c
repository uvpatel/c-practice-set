/*5. Write a program to determine whether a character entered by the user is
lowercase or not.*/

#include<stdio.h>

int main(){
    char character;
    printf("Enter character: ");
    scanf("%c",&character);
    if( 90 <= character <= 125){
        printf("The given character is in Uppercase");
    }
    else{
        printf("The given character is in Lowercase");
    }
    return 0;
}