#include "main.h"

/**
 * print_diagsums - Prints sum of the two diagonals of a square matrix of int
 *
 * @a: Array
 * @size: Size of array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int column = 0;
	int value = 0;
	int sum = 0;
	int sum2 = 0;

	while (column < (size * size))
	{
		value = *(a + column);
		sum = sum + value;
		column = column + size + 1;
	}
	column = size - 1;
	while (column < ((size * size) - 1))
	{
		value = *(a + column);
		sum2 = sum2 + value;
		column = column + (size - 1);
	}
	printf("%d, %d\n", sum, sum2);
}
