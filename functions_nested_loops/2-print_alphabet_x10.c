#include "main.h"

/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int alpha;
	int x10;

	for (x10 = 48 ; x10 <= 57 ; x10++)
	{
		for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
