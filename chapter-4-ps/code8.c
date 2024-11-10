// 8. Write a program to calculate the factorial of a given number using a for loop


#include <stdio.h>

int main() {
    int n, factorial = 1; // Initialize factorial to 1
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i; // Multiply factorial by i
    }

    printf("The factorial of %d is: %d\n", n, factorial);
    return 0;
}
