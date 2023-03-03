#include "main.h"

/**
 * *_memcpy - Write a function that copies memory area
 *
 * @dest: to memory area
 * @src:  function copies
 * @n: bytes from memory area
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int recor = 0;

	for (recor = 0; recor < n; recor++)
	{
		dest[recor] = src[recor];
	}
	return (dest);
}
