#include <stdio.h>
#include "autentificare.h"

int status;

// Helper function to compute GCD
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// Login function implementation
void login(int username, int password) {
    if (gcd(username, password) == 1) {
        status = 1;
        printf("Authentication successful!\n");
    } else {
        status = 0;
        printf("Authentication failed!\n");
    }
}