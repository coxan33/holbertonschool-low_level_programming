#include <stdio.h>

/**
 * main - Write a program that prints its name, followed by a new line.
 *
 * @argc: If you rename the program, it will print the new name
 * @argv: You should not remove the path before the name of the program
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)

		printf("%s\n", argv[0]);

	return (0);
}
