#include "main.h"
/**
 * print_triangle - Retry point
 *
 * @size: Write a function that prints a triangle, followed by a new line.
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int a;
	int b;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b < size - a)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
