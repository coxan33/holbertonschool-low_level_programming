#include "main.h"

/**
 * print_alphabet - Write a function that prints the alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
