// Input a number n
// Requirements:
// Modify the code so that it only displays whether a number is prime or not.

// You must add a loop so that the program checks whether each number in the interval [1; 𝑛] is prime or not
// (each number in the interval should be checked for primality).

// Skip the number if its remainder when divided by 5 is equal to 4.

// Perform the following actions depending on the remainder of the number divided by 10:
// Remainder 1: Display the number.
// Remainder 2: Display the number divided by 10.
// Remainder 3: Display whether the number is prime or not.
// Remainder 5: Increase the for loop limit by 1.
// If the remainder of the number divided by 10 is not among the specified cases, do nothing (process the next number).

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

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 5 == 4) {
            continue; // Skip number if remainder mod 5 is 4
        }

        switch (i % 10) {
            case 1:
                printf("Number: %d\n", i);
                break;
            case 2:
                printf("Number / 10: %d\n", i / 10);
                break;
            case 3:
                if (is_prime(i)) {
                    printf("%d is a prime number\n", i);
                } else {
                    printf("%d is not a prime number\n", i);
                }
                break;
            case 5:
                n++; // Increase the loop limit
                break;
            default:
                // Do nothing
                break;
        }
    }

    return 0;
}
