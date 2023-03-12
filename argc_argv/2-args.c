#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives.
 *
 * @argc: All arguments should be printed, including the first one
 * @argv: Only print one argument per line, ending with a new line
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cont;

	for (cont = 0; cont < argc; cont++)
		printf("%s\n", argv[cont]);

	return (0);
}
