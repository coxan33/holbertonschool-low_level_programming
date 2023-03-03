#include "main.h"

/**
 * *_memset - Write a function that fills memory with a constant byte
 *
 * @s: Pointer
 * @b: constant byte
 * @n: bytes of the memory area pointed
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cont = 0;

	for (cont = 0; cont < n; cont++)
	{
		s[cont] = b;
	}
	return (s);
}
