#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Write a function that prints all natural numbers from n to 98
 *
 * @n: numbers
 *
 * Return: 0
 */

void print_to_98(int n)
{
	for (n = 0 ; n <= 98 ; n++)
	{
		printf("%d", n);
		printf(", ");
	}
	_putchar('\n');
}
