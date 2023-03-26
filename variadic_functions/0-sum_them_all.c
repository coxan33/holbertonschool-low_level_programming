#include "variadic_functions.h"

/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 *
 * @n: All numbers
 *
 * Return: All parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int cont = 0;
	int s = 0;

	if (n == 0)
		return (0);

	va_start(num, n);
	for (cont = 0; cont < n; cont++)
		s = s + va_arg(num, int);
	va_end(num);
	return (s);
}
