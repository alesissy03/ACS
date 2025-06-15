// Write a recursive function that reads one natural number at a time from the keyboard.
// If a negative number is entered, it should be ignored.
// If the number is prime, increment a counter.
// Reading stops when the number 0 is entered.
// After the input ends, display the counter.

#include <stdio.h>

#include <stdio.h>

// Checks if a number is prime
int is_prime(int x) {
    if (x < 2) return 0;
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0)
            return 0;
    }
    return 1;
}

// Recursive function that reads and counts primes
void read_and_count_primes(int *counter) {
    int n;
    scanf("%d", &n);

    if (n == 0) return;        // Stop on 0
    if (n > 0 && is_prime(n))  // Count prime numbers only if positive
        (*counter)++;

    // Recurse for the next input
    read_and_count_primes(counter);
}

int main() {
    int counter = 0;
    printf("Enter numbers (0 to stop):\n");

    read_and_count_primes(&counter);

    printf("Counter: %d\n", counter);
    return 0;
}
