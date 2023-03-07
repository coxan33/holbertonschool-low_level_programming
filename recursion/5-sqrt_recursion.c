#include "main.h"

/**
 * number - the natural square
 *
 * @a: number
 * @b: square
 *
 * Return: Integer
 */

int number(int a, int b)
{
	if (a == (b * b))
		return (b);

	else if (a > (b * b))
		return (number(a, b + 1));

	else
		return (-1);
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: number
 *
 * Return: Integer
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);

	return (number(n, 1));
}
