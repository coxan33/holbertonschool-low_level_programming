#include "main.h"

/**
 * _strcmp - Write a function that compares two strings.
 *
 * @s1 - First String
 * @s2: Second String
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (*s1 - *s2);

	return (0);
}
