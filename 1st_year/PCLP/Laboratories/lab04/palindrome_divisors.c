// Write a function that reads a natural number from the keyboard
// and calculates how many of its divisors are palindromes.
// The function should print to the console the divisors that are palindromes, as well as their total count.
// Choose a suitable name for the implemented function and call it from main to test it.

#include <stdio.h>

// Function to check if a number is a palindrome
int is_palindrome(int x) {
    int original = x, reversed = 0;
    while (x > 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    return original == reversed;
}

// Function to find and count palindromic divisors
void count_palindrome_divisors(int n) {
    int count = 0;

    printf("Palindromic divisors of %d:\n", n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && is_palindrome(i)) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal palindromic divisors: %d\n", count);
}

int main() {
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);

    count_palindrome_divisors(n);
    return 0;
}
