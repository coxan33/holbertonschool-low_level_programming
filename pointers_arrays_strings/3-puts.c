#include "main.h"

/**
 * _puts - Write a function that prints a string, followed by a new line.
 *
 * @str: print string
 *
 * Return: 0
 */

void _puts(char *str)
{
	while (*str)

		_putchar(*str++);

	_putchar('\n');
}
