#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Prints single base 10 digits from 1 - 10.
 * Return: 0 (Success)
 */

int main(void)


{
	char base;

	for (base = 0; base <= 10; base++)
		putchar(base);
	putchar('\n');

	return (0);
}
