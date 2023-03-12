#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that adds positive numbers.
 *
 * @argc: Print the result
 * @argv: If no number is passed to the program, print 0
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cont = 0;
	int cont2 = 0;
	int num = 0;

	for (cont = 1; cont < argc; cont++)
	{
		for (cont2 = 0; argv[cont][cont2] != 0; cont2++)
		{
			if (argv[cont][cont2] < '0' || argv[cont][cont2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		num += atoi(argv[cont]);
	}
	printf("%d\n", num);
	return (0);
}
