#include <stdio.h>
#include "main.h"

/**
 * main - Prints all the argument it recieves
 * @argc: Number of command line
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
