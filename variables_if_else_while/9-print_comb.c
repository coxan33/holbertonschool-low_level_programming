#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: 0
 */

int main(void)
{
	int a;
	int b = ',';
	int c = ' ';

	for (a = 48 ; a <= 57 ; a++)
	{
		putchar(a);

		if ( a < 57)
		{
			putchar(b);
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
