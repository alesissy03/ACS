# Variable declaration
CC = gcc
CFLAGS = -Wall -lm

# General compiling rule
all:
	$(CC) -o hello hello.c $(CFLAGS)
	$(CC) -o base_convertor base_convertor.c $(CFLAGS)
	$(CC) -o basic_operations basic_operations.c $(CFLAGS)
	$(CC) -o sums sums.c $(CFLAGS)
	$(CC) -o min_max min_max.c $(CFLAGS)
	$(CC) -o eq_not_eq eq_not_eq.c $(CFLAGS)

# Cleaning (used to remove intermediate files and / or results)
.PHONY : clean
clean :
	rm -f hello base_convertor basic_operations sums min_max eq_not_eq *~