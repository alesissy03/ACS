// Read two real numbers. Calculate their sum, difference and average with a precision of 5 decimal places.

#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float difference(float a, float b) {
    return a - b;
}

float average(float a, float b) {
    return (a + b) / 2.0;
}

double truncate_to_six_decimal_places(double value) {
    return (int)(value * 100000) / 100000.0;
}

int main() {
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    float sum, dif, avr;
    sum = add(a, b);
    dif = difference(a, b);
    avr = average(a, b);

    printf("The sum of the numbers is: %.5f\n", sum);
    printf("The difference of the numbers is: %.5f\n", dif);
    printf("The average of the numbers is: %.5f\n", avr);

    return 0;
}