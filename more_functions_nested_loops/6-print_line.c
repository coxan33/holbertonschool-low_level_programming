#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal.
 *
 * @n: print straight
 *
 * Return: 0
 */

void print_line(int n)
{
	int a = 1;

	while (a <= n)
	{
		_putchar(95);
		a++;
	}
	_putchar('\n');
}
