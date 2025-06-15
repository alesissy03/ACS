# Variable declaration
CC = gcc
CFLAGS = -Wall -lm

# General compiling rule
all:
	$(CC) -o ex1 ex1.c $(CFLAGS)
	$(CC) -o largest_sum largest_sum.c $(CFLAGS)
	$(CC) -o list_of_numbers list_of_numbers.c $(CFLAGS)
	$(CC) -o function function.c $(CFLAGS)
	$(CC) -o binary_decimal binary_decimal.c $(CFLAGS)
	$(CC) -o palindrome palindrome.c $(CFLAGS)
	$(CC) -o cmmdc cmmdc.c $(CFLAGS)

# Cleaning (used to remove intermediate files and / or results)
.PHONY : clean
clean :
	rm -f ex1 largest_sum list_of_numbers function binary_decimal palindrome cmmdc *~