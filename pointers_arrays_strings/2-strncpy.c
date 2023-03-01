#include "main.h"

/**
 * *_strncpy - Write a function that copies a string.
 *
 * @dest: copy to
 * @src: copy from
 * @n: imput number
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int cont;

	for (cont = 0; src[cont] != '\0'; cont++)
		if (cont < n)
			dest[cont] =  src[cont];

	while (cont < n)
	{
		dest[cont++] = '\0';
	}
	return (dest);
}
