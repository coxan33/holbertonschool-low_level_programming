#include "main.h"

/**
 * print_chessboard - Write a function that prints the chessboard
 *
 * @a: Array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int column;
	int row;

	for (row = 0; a[row][7]; row++)
	{
		for (column = 0; column < 8; column++)
			printf("%c", a[row][column]);
		printf("\n");
	}
}
