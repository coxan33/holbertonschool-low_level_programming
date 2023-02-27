#include "main.h"

/**
 * print_rev - Write a function that prints a string, in reverse.
 *
 * @s: Print a Strinf in Reverse
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		cont++;
	}
	cont = cont - 1;
	while (cont >= 0)
	{
		_putchar(s[cont]);
		cont--;
	}
	_putchar('\n');
}
