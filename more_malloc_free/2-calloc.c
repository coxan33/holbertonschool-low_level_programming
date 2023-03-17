#include "main.h"

/**
 * _calloc - Write a function that allocates memory for an array, using malloc
 *
 * @nmemb: function allocates memory for an array of nmemb
 * @size: number of element
 *
 * Return: Int
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int cont = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(sizeof(char *) * nmemb * size);

	if (array == NULL)
		return (NULL);

	for (cont = 0; cont < nmemb * size; cont++)
		array[cont] = 0;

	return (array);
}
