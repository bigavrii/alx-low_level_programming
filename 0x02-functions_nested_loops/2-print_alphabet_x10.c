#include "main.h"

/**
 * main - Entry point
 *
 * Description: print_alphabet_x10
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)

{
	int c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
