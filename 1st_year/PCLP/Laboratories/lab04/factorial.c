#include <stdio.h>

// Iterative factorial calculation
int factorial_iterativ(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Recursive factorial calculation
int factorial_recursiv(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial_recursiv(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("Factorial iterativ: %d\n", factorial_iterativ(n));
    printf("Factorial recursiv: %d\n", factorial_recursiv(n));

    return 0;
}