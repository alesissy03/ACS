// Several positive integers are entered from the keyboard, ending with a negative number.
// After each number is entered, its list of non-trivial divisors will be displayed,
// or the text PRIME if the number is prime.
// At the end, the program will display the number of prime numbers found.

#include <stdio.h>

// Function to check if a number is prime
int is_prime(int x) {
    if (x < 2) return 0;
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    int number_of_primes = 0;
    while (1) {
        scanf("%d", &n);
        if (n < 0) {
            printf("S-au gasit %d numere prime.\n", number_of_primes);
            return 0;
        } else if (is_prime(n)) {
            number_of_primes++;
            printf("PRIM\n");
        } else {
            for (int i = 2; i < n; i++) {
                if (n % i == 0) {
                    printf("%d ", i);
                }
            }
            printf("\n");
        }
    }
}