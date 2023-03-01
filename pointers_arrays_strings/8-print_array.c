#include "main.h"

/**
 * print_array - Write a function prints n elements of an array of integers.
 *
 * @a: Array
 * @n: is the number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int cont;

	for (cont = 0; cont < n; cont++)
	{
		printf("%d", a[cont]);

		if (cont < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

