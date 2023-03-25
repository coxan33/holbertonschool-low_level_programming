#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer.
 *
 * @array: Array
 * @size: is the number of elements in the array
 * @cmp:  is a pointer to the function to be used to compare values
 *
 * Return: Integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int cont = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (cont = 0; cont < size; cont++)
	{
		if (cmp(array[cont]) != 0)
			return (cont);
	}
	return (-1);
}
