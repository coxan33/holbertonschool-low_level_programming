#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 * Return: 1 if it works, -1 if it doesn´t.
**/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ch;

	if (index > 31)
		return (-1);
	ch = 1 << index;
	if (*n & ch)
		*n ^= ch;
	return (1);
}
