#include "main.h"
#include <stdio.h>

/**
 * main - Retry point
 *
 * Return: 0
 */

int main(void)
{
	int print;

	for (print = 1; print < 100; print++)
	{
		if ((print % 3 == 0) && (print % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (print % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (print % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ",  print);
		}
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
