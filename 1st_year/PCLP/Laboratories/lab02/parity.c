// Check that a number is even using two methods.

#include <stdio.h>

int main() {
    int n;

    printf("Input a number: ");
    scanf("%d", &n);

    printf("First method: using %% \n");

    if (n % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    printf("Second medthod: using & 1\n");

    if ((n & 1) == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    return 0;
}