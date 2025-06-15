#include <stdio.h>

// Recursive sum of digits calculation
int suma_cifre_recursiv(int n) {
    if (n == 0) {
        return 0;
    }

    return n % 10 + suma_cifre_recursiv(n / 10);
}

// Iterative sum of digits calculation
int suma_cifre_iterativ(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("Recursive sum of digits: %d\n", suma_cifre_recursiv(n));
    printf("Iterative sum of digits: %d\n", suma_cifre_iterativ(n));

    return 0;
}