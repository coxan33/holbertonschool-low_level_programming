#include "main.h"

/**
 * *_strncat - Write a function that concatenates two strings.
 *
 * @dest: copy to
 * @src: copy from
 * @n: bytes
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int cont = 0;
	int contador = 0;

	while (dest[cont])
		cont++;


	for (contador = 0; contador < n; contador++)
	{
		dest[cont + contador] = src[contador];
		if (src[contador] == '\0')
			contador = n;
	}
	return (dest);
}
