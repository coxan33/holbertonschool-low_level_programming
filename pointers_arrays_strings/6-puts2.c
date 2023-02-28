#include "main.h"

/**
 * puts2 - prints every other character of a string.
 *
 * @str: starting with the first character
 *
 * Return: 0
 */

void puts2(char *str)
{
	int cont = 0;

	while (str[cont])
	{
		if (cont % 2 == 0)
			_putchar(str[cont]);
		cont++;
	}
	_putchar('\n');
}
