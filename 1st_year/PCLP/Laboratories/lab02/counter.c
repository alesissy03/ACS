// Write a program that counts descendently from 3 to 1 and then output START
// (with an interval of 1 second between each number)

// Example:

// 3 //așteaptă o secundă
// 2 //așteaptă o secundă
// 1 //așteaptă o secundă
// START

#include <stdio.h>
#include <time.h>

void wait_one_second() {
    clock_t start = clock();
    while ((clock() - start) < CLOCKS_PER_SEC) {
        // wait
    }
}

int main() {
    for (int i = 3; i > 0; i--) {
        printf("%d\n", i);
        wait_one_second();
    }

    printf("START\n");
    return 0;
}