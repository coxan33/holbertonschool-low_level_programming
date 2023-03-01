#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 *
 * @a: First String
 * @n: Second String
 */

void reverse_array(int *a, int n)
{
	int cont;
	int rev;

	for (rev = 0; rev < n / 2; rev++)
	{
		cont = a[rev];
		a[rev] = a[n - rev -1];
		a[n - rev - 1] = cont;
	}
}
