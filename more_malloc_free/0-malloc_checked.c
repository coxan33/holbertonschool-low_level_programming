#include "main.h"

/**
 * malloc_checked - Write a function that allocates memory using malloc
 *
 * @b: function should cause normal process termination with a status val of 98
 *
 * Return: Int
 */

void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);

	if (array == NULL)
		exit(98);

	else
		return (array);
}
