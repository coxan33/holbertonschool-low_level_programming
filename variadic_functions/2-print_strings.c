#include "variadic_functions.h"

/**
 * print_strings - Write a function that prints strings, followed by a new line
 *
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list text;
	unsigned int cont = 0;
	char *array;

	va_start(text, n);
	if (separator == NULL)
		separator = "";

	for (cont = 0; cont < n; cont++)
	{
		array = va_arg(text, char*);
		if (array == NULL)
			printf("(nil)");
		else
		{
			if (cont != n - 1)
				printf("%s%s", array, separator);
			else
				printf("%s", array);
		}
	}
	printf("\n");
	va_end(text);

}

