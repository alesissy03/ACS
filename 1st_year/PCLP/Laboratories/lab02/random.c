// Write a program that calculates 5 random values and outputs them,
// use as seed the systems's clock. Execute the program multiple times.
// After, change the seed with a constant value (0x1234 for example)
// and run the program again, multiple times.
// What do you observe? What is the explanation?

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int clock_random;
    srand((unsigned)time(NULL)); 
    clock_random = rand();

    printf("System's clock as seed: %d\n", clock_random);

    int constant_random;
    srand(0x1234); 
    constant_random = rand();

    printf("Constant value as seed: %d\n", constant_random);

    return 0;
}