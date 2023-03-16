#include "main.h"

/**
 * free_grid - Write a function that frees a 2 dimensional
 *
 * @grid: Array to free
 * @height: Array to free
 *
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int cont = 0;

	for (cont = 0; cont < height; cont++)

		free(grid[cont]);
	free(grid);
}
