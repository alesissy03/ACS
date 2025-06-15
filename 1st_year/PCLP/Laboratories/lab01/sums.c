// Calculate, using math formulas, not repetitive instructions sum from 0 to n and the sum of squares from 0 to n (given as an input)

#include <stdio.h>

int main() {
    int n;

    printf("Introduce a number: ");
    scanf("%d", &n);

    int sum_zero_to_n = (n * (n + 1)) / 2;
    int sum_of_squares = (n * (n + 1) * (2 * n + 1)) / 6;
    printf("The sum from 0 to n is: %d\n", sum_zero_to_n);
    printf("The sum of the squares from 0 to n is: %d\n", sum_of_squares);

    return 0;
}