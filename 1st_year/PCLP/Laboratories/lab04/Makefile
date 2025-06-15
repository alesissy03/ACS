# Variable declaration
CC = gcc
CFLAGS = -Wall -lm

# General compiling rule
all:
	$(CC) -o ex1 ex1.c $(CFLAGS)
	$(CC) -o factorial factorial.c $(CFLAGS)
	$(CC) -o sum_digits sum_digits.c $(CFLAGS)
	$(CC) -o is_prime is_prime.c $(CFLAGS)
	$(CC) -o palindrome palindrome.c $(CFLAGS)
	$(CC) -o palindrome_divisors palindrome_divisors.c $(CFLAGS)
	$(CC) -o recursions recursions.c $(CFLAGS)
	$(CC) -o autentificare_prog main.c autentificare.c $(CFLAGS)

# Cleaning (used to remove intermediate files and / or results)
.PHONY : clean
clean :
	rm -f ex1 factorial sum_digits is_prime palindrome palindrome_divisors recursions autentificare_prog *~