#include "main.h"

/**
 * _strchr - Write a function that locates a character in a string.
 *
 * @s: String
 * @c: a pointer to the first occurrence of the character
 *
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; (s[count] != c) && (s[count] != '\0'); count++)
		;
	if (s[count] == c)
		return (s + count);
	else
		return (NULL);
}
