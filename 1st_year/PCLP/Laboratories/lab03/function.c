// Let the function f : [u, v] → [min, max], defined as
// f(x) = a·x² + b·x + c, where a, b, c, u, and v are given.
// Determine the minimum and maximum values of the function on the interval u, v,
// then solve the equation f(x) = 0 in the set of real numbers.
// Display only the roots that lie within the interval u, v.

#include <stdio.h>
#include <math.h>

double f(double x, double a, double b, double c) {
    return a * x * x + b * x + c;
}

int main() {
    double a, b, c, u, v;
    printf("Enter a, b, c as parameters of a function and u v as an interval.\n");
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &u, &v);

    // Step 1: Calculate minimum and maximum of f(x) in [u, v]
    double x_vertex = -b / (2 * a); // x of vertex
    double f_u = f(u, a, b, c);
    double f_v = f(v, a, b, c);
    double f_vertex;

    if (x_vertex >= u && x_vertex <= v) {
        f_vertex = f(x_vertex, a, b, c);
    } else {
        f_vertex = f_u; // just set a default value
    }

    double min_val = f_u;
    double max_val = f_u;

    if (f_v < min_val) min_val = f_v;
    if (f_v > max_val) max_val = f_v;
    if (x_vertex >= u && x_vertex <= v) {
        if (f_vertex < min_val) min_val = f_vertex;
        if (f_vertex > max_val) max_val = f_vertex;
    }

    printf("Min = %.4lf\n", min_val);
    printf("Max = %.4lf\n", max_val);

    // Step 2: Solve f(x) = 0
    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("No real roots.\n");
    } else {
        double x1 = (-b - sqrt(delta)) / (2 * a);
        double x2 = (-b + sqrt(delta)) / (2 * a);

        int found = 0;
        if (x1 >= u && x1 <= v) {
            printf("Root in [%.2lf, %.2lf]: x = %.4lf\n", u, v, x1);
            found = 1;
        }
        if (delta > 0 && x2 >= u && x2 <= v) {
            printf("Root in [%.2lf, %.2lf]: x = %.4lf\n", u, v, x2);
            found = 1;
        }
        if (!found) {
            printf("No roots in the interval [%.2lf, %.2lf].\n", u, v);
        }
    }

    return 0;
}