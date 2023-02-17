#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: 0
 */

int main(void)
{
	int b16;

	for (b16 = 48 ; b16 <= 57 ; b16++)
	{
		putchar(b16);
	}
	for (b16 = 'a' ; b16 <= 'f' ; b16++)
	{
		putchar(b16);
	}
	putchar('\n');
	return (0);
}
