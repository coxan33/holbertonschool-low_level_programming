#include "main.h"

/**
 * **alloc_grid - Write a function that return a pointer to a 2 dimensional.
 *
 * @width: Array of integer
 * @height: Array of integer
 *
 * Return: Int
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int contheight = 0;
	int contwidth = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}

	for (contheight = 0; contheight < height; contheight++)
	{
		array[contheight] = malloc(sizeof(int) * width);
		if (array[contheight] == NULL)
		{
			for (; contheight >= 0; contheight--)
				free(array[contheight]);

			free(array);
			return (NULL);
		}
	}
	for (contheight = 0; contheight < height; contheight++)
	{
		for (contwidth = 0; contwidth < width; contwidth++)
			array[contheight][contwidth] = 0;
	}
	return (array);
}
