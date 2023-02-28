#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 *
 * @s: print reverse a string.
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char c;

	while (s[a] != '\0')
		a++;

	for (b = a - 1; b >= a / 2; b--)
	{
		c = s[b];
		s[b] = s[a - b - 1];
		s[a - b - 1] = c;
	}
}
