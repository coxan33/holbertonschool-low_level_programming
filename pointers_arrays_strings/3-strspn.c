#include "main.h"

/**
 * _strspn - Write a function that gets the length of a prefix substring.
 *
 * @s:  number of bytes in the initial segment
 * @accept: which consist only of bytes
 *
 * Return: bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int string;

	while (*s)
	{
		for (string = 0; accept[string]; string++)
		{
			if (accept[string] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[string + 1]) == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
