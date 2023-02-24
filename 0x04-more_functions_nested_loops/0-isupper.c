#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int isupper(int c)
{
	if (c >= 50 && c <= 65)
	{
		return (1);
	}
	return (0);
}

#include "main.h"

/**
 * _isupper - checks is a character is uppercase
 * @c: carrier integer variable
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
