#include "main.h"

/**
 * *_strcpy - Write a function that copies the string pointed to by src
 *
 * @dest: copies the string pointed
 * @src: to the buffer pointed
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int cont;

	for (cont = 0; src[cont] != 0; cont++)
	{
		dest[cont] = src[cont];
	}
	dest[cont] = '\0';

	return (dest);
}
