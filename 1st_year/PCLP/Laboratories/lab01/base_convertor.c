// Read an integer n in base 10. Output the integer n in base 8, 10 and 16.

// I used the descriptors to convert the number into the desired base

#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer in base 10: ");
    scanf("%d", &n);

    printf("Your integer in base 8: %o\n", n);
    printf("Your integer in base 10: %d\n", n);
    printf("Your integer in base 16: %x\n", n);
    
    return 0;
}