#include "main.h"

/**
 * create_array - Write a function that creates an array of chars,
 *
 * @size: size of array
 * @c: Chracter
 *
 * Return: Char
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a = 0;

	if (size > 0)

		array = malloc(size * sizeof(char));

	else
		return (NULL);

	if (array == 0)
		return (NULL);

	while (a < size)
	{
		array[a] = c;
		a++;
	}
	return (array);
}
