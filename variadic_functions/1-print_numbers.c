#include "variadic_functions.h"

/**
 * print_numbers - Write a function that prints numbers followed by a new line
 *
 * @separator:  is the string to be printed between numbers
 * @n:  is the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int cont = 0;
	int s = 0;

	va_start(num, n);
	for (cont = 0; cont < n; cont++)
	{
		s = va_arg(num, const unsigned int);
		if (cont < (n - 1))
			printf("%i%s", s, separator);

		else
			printf("%i", s);

	}
	printf("\n");
	va_end(num);
}
