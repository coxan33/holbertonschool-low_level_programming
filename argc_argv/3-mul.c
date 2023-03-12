#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers
 *
 * @argc: Your program should print the result of the multiplication
 * @argv: You can assume that the two numbers and result of the multiplication
 *
 * Return: 1, 0
 */

int main(int argc, char *argv[])
{
	if (argc < 4 && argc > 2)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
