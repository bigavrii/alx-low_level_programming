#include "main.h"

/**
 * main - checks the code from 0 through 9
 *
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
