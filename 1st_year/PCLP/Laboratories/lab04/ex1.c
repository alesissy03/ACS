// Write a function that computes the sum of digits in a non-recursive way.
// Modify the recursive function so that it calculates only the sum of odd digits.
// Modify the recursive function so that at the first odd digit,
// it stops recursion and returns the sum accumulated up to that point.

#include <stdio.h>

int sum_recursive(int n)
{
    if (n == 0) {
        return 0;
    }

    return n % 10 + sum_recursive(n / 10);
}

int sum_recursive_only_odd(int n) {
    if (n == 0) {
        return 0;
    }

    int digit = n % 10;

    if (digit % 2 == 1) {
        return digit + sum_recursive_only_odd(n / 10);
    } else {
        return sum_recursive_only_odd(n / 10);
    }
}

int sum_recursive_until_odd(int n) {
    if (n == 0) {
        return 0;
    }

    int digit = n % 10;

    if (digit % 2 == 1) {
        return 0; // stop on the first odd digit
    }
    return digit + sum_recursive_until_odd(n / 10);
}

int sum_nonrecursive(int n) {
    int sum = 0;

    while (n) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main(void)
{
    int nr;

    scanf("%d", &nr);

    printf("Recursive: %d\n", sum_recursive(nr));
    printf("Non-recursive: %d\n", sum_nonrecursive(nr));
    printf("Sum-odd: %d\n", sum_recursive_only_odd(nr));
    printf("Sum-until-odd: %d\n", sum_recursive_until_odd(nr));

    return 0;
}