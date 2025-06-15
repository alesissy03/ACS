// Write a program that converts numbers from base 2 to base 10 and vice versa.
// The numbers are entered from the keyboard until a negative number is encountered.
// For each number entered, display the converted result on a new line.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Function to check if a string is a binary number
int is_binary(const char *str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] != '0' && str[i] != '1') return 0;
    }
    return 1;
}

// Function to convert decimal to binary and print
void decimal_to_binary(int num) {
    char binary[64];
    int i = 0;

    if (num == 0) {
        printf("0\n");
        return;
    }

    while (num > 0) {
        binary[i++] = (num % 2) + '0';
        num /= 2;
    }

    // Print in reverse order
    for (int j = i - 1; j >= 0; j--) {
        putchar(binary[j]);
    }
    putchar('\n');
}

int main() {
    char input[100];

    while (1) {
        scanf("%s", input);

        // If input is a negative number, exit
        if (input[0] == '-' && isdigit(input[1])) {
            break;
        }

        if (is_binary(input)) {
            // Binary to decimal
            int decimal = (int)strtol(input, NULL, 2);
            printf("%d\n", decimal);
        } else {
            // Decimal to binary
            int num = atoi(input);
            decimal_to_binary(num);
        }
    }

    return 0;
}
