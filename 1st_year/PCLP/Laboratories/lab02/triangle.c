// Having 3 integers, read as an input, check if they are compatible to form a triangle.
// If so: output "YES", else: output "NO"

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Introduce 3 numbers to check for triangle possibility: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b) > c && (a + c) > b && (b + c) > a) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}