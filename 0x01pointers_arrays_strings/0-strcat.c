#include "main.h"

/**
 * *_strcat - Write a function that concatenates two strings.
 *
 * @dest: string
 * @src:  function appends
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int cont;
	int cont2 = 0;

	for (cont = 0; dest[cont] != 0; cont++)
		;

	while (src[cont2])
	{
		dest[cont] = src[cont2];
		cont++;
		cont2++;
	}
	return (dest);
}
