// Read to real numbers. Print EQ if the numbers are equal down to 4 decimal places; otherwise, print NOT EQ.

#include <stdio.h>

double truncate_to_four_decimal_places(double value) {
    return (int)(value * 10000) / 10000.0;
}

int main() {
    double a, b;

    printf("Enter two real numbers: ");
    scanf("%lf %lf", &a, &b);

    a = truncate_to_four_decimal_places(a);
    b = truncate_to_four_decimal_places(b);

    if (a == b) {
        printf("EQ\n");
    } else {
        printf("NOT EQ\n");
    }

    return 0;
}