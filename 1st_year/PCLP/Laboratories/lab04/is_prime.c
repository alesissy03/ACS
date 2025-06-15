#include <stdio.h>

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
    scanf("%d", &n);

    printf("%d\n", is_prime(n));
    
    return 0;
}