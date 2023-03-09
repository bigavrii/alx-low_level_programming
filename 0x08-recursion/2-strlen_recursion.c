#include "main.h"

/**
 * int _strlen_recursion - returns the len of a string
 * @s: string
 * Return 0;
 */

int _strlen_recursion(char *s)

{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (1);
}
