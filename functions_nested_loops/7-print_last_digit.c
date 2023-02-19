#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 *
 * @n: print last digit
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (ld);
}
