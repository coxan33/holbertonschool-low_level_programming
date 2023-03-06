#include "main.h"

/**
 * _atoi - Write a function that convert a string to an integer
 *
 * @s: Pointer
 *
 * Return: 0
 */

int _atoi(char *s)
{
	int cont = 0;
	unsigned int number = 0;
	int min = 1;
	int a = 0;

	while (s[cont])
	{
		if (s[cont] == 45)
		{
			min *= 1;
		}
		while (s[cont] >= 48 && s[cont] <= 57)
		{
			a = 1;
			number = (number * 10) + (s[cont] - '\0');
			cont++;
		}
		if (a == 1)
		{
			break;
		}
		cont++;
	}
	return (number);
}
