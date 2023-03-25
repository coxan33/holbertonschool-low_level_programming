#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - Entry Point
 *
 * @argc: Argument
 * @argv: Argument 2
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[1] != NULL && argv[3] != NULL)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
	}
	if (argv[2][1] != '\0' || argv[2][0] == '.')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", ((*get_op_func(argv[2]))(num1, num2)));
	return (0);
}
