#include <stdio.h>

/**
 * main - Write a program that prints the number of arguments passed into it
 *
 * @argc:Your program should print a number
 * @argv: Array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argv[0])

		printf("%d\n", argc - 1);

	return (0);
}
