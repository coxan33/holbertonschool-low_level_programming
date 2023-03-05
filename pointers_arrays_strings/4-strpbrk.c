#include "main.h"

/**
 * _strpbrk - Write a function that searches a string for any of a set of bytes
 *
 * @s:  function locates the first occurrence
 * @accept: bytes in the string
 *
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int cont;

	while (*s)
	{
		for (cont = 0; accept[cont]; cont++)
		{
			if (accept[cont] == *s)
				return (s);
		}
		s++;
	}
	return (NULL);
}
