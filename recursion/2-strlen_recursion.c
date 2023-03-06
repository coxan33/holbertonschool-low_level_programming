#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string.
 *
 * @s: Pointer
 *
 * Return: Int
 */

int _strlen_recursion(char *s)
{
	int cont = 0;

	if (*s != '\0')
	{
		cont++;
		cont = cont +_strlen_recursion(s + 1);
	}
	return (cont);
}
