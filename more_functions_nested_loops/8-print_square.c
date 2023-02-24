#include "main.h"

/**
 * print_square - Write a function that prints a square, followed by a new line
 *
 * @size: Print Square
 *
 * Return: 0 
 */

void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
