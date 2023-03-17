#include "main.h"

/**
 * array_range - Write a function that creates an array of integers
 *
 * @min: The array created should contain all the values from min
 * @max: (included) to max (included), ordered from min to max
 *
 * Return: Int
 */

int *array_range(int min, int max)
{
	int *array;
	int cont = 0;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) *  (max - (min - 1)));

	if (array == NULL)
		return (NULL);

	for (cont = 0; cont < (max - (min - 1)); cont++)
		array[cont] = min + cont;

	return (array);

}
