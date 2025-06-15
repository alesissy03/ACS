// Determine the minimum and maximum between two numbers using fabs (to determine the absolute minimum and maximum.
// Output the result with 2 decimal places

#include <stdio.h>
#include <math.h>

double minimum(double a, double b) {
    if (a < b) return a;
    else return b;
}

double maximum(double a, double b) {
    if (a > b) return a;
    else return b;
}

double truncate_to_two_decimal_places(double value) {
    return (int)(value * 100) / 100.0;
}

int main() {
    double a, b;

    printf("Introduce 2 numbers: ");
    scanf("%lf %lf", &a, &b);

    double min = minimum(fabs(a), fabs(b));
    double max = maximum(fabs(a), fabs(b));
    min = truncate_to_two_decimal_places(min);
    max = truncate_to_two_decimal_places(max);

    printf("The minimum between the two numbers is: %.2lf\n", min);
    printf("The maximum between the two numbers is: %.2lf\n", max);

    return 0;
}