#include "main.h"
/**
* get_bit - returns the value of a selected bit
* @n: unsigned long int input.
* @index: index of the bit.
* Return: value of the bit.
**/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (n == 0 && index < 32)
		return (0);
	for (x = 0; x <= 31; n >>= 1, x++)
	{
		if (index == x)
		{
			return (n & 1);
		}
	}
	return (-1);
}
