#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string.
 *
 * @s: returns the length of a string.
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != 0; length++)
		;
		return (length);

}
