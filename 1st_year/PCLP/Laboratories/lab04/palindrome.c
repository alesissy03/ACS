// Write a number that checks if a number n is a palindrome.

#include <stdio.h>

int is_palindrome(int n) {
    int reversed = 0, orignial = n;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    if (reversed == orignial) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    printf("%d\n", is_palindrome(n));

    return 0;
}
