// Input a positive integer N.
// Write a program that determines which number between 2 and N has the maximum sum of non-trivial divisors
// (i.e., the divisors do not include the numbers 1 and N itself).
// If there are multiple such numbers with the same maximum sum, only the first one should be displayed.

#include <stdio.h>

int main() {
    int n, max_sum, max_nr, sum;
    max_sum = -1;
    sum = 0;
    scanf("%d", &n);

    for (int i = 2; i < n; i++) {
        for (int j = 2; j < i / 2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum > max_sum) {
            max_sum = sum;
            max_nr = i;
        }
        sum = 0;
    }

    printf("%d\n", max_nr);

    return 0;
}