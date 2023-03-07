#include "main.h"

/**
 * _pow_recursion - Write a function that returns the value of x
 *
 * @x: value of x
 * @y: power of y
 *
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));
}
