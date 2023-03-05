#include "main.h"

/**
 * _strstr - Write a function that locates a substring
 *
 * @haystack: in the string
 * @needle: substring
 *
 * Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int cont = 0;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		if (haystack[cont] == needle[cont])
		{
			do {
				if (needle[cont + 1] == '\0')
					return (haystack);
				cont++;
			} while (haystack[cont] == needle[cont]);
		}
		haystack++;
	}
	return (NULL);
}
