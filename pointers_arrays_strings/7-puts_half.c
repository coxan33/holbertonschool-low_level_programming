#include "main.h"

/**
 * puts_half - Write a function that prints half of a string.
 *
 * @str: prints half of a string
 */

void puts_half(char *str)
{
	int cont = 0;

	while (str[cont])
		cont++;

	cont = (cont + 1) / 2;

	while (str[cont])
	{
		_putchar(str[cont]);
		cont++;
	}
	_putchar('\n');
}
