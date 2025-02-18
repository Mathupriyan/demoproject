#include<stdio.h>

int main() {
    int n, i, fact = 1;

    // Prompt the user to enter a number
    printf("Enter the number: ");
    // Use `&n` to correctly store the input in the variable `n`ṇ
    scanf("%d", &n);

    // Factorial calculation
    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    // Print the factorial
    printf("The factorial is: %d\n", fact);

    return 0;
}
