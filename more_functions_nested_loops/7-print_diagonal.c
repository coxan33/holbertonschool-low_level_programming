#include "main.h"

/**
 * print_diagonal - Write a function that draws a diagonal line on the terminal
 *
 * @n: print a diagonal
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int barra;
	int espacio;

	if (n > 0)
	{
		for (barra = 0; barra < n; barra++)
		{
			for (espacio = 0; espacio < barra; espacio++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
