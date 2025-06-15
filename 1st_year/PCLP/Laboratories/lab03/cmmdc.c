// Read N numbers.
// Find the biggest common divisor to these N numbers, without using vectors.

#include <stdio.h>

int find_gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int n, x, gcd;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    // Read the first number
    scanf("%d", &gcd);

    // Read and compute GCD with the remaining numbers
    for (int i = 1; i < n; i++) {
        scanf("%d", &x);
        gcd = find_gcd(gcd, x);
    }

    printf("The greatest common divisor is: %d\n", gcd);

    return 0;
}