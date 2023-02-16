#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int s;

	for (s = 'a' ; s <= 'z' ; s++)
	{
		if (s != 'e' && s != 'q')
			putchar(s);
	}
	putchar('\n');

	return (0);
}
