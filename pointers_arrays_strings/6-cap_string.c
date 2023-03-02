#include "main.h"

/**
 * *cap_string - Write a function that capitalizes all words of a string
 *
 * @cap:  capitalizes all words
 *
 * Return: cap
 */

char *cap_string(char *cap)
{
	int ch = 0;

	while (cap[ch])
	{
		if (cap[ch] >= 97 && (cap[ch] <= 122 && cap[ch] == cap[0]))
			cap[ch] = cap[ch] - 32;

		if (cap[ch] >= 97 && cap[ch] <= 122)
		{
			switch (cap[ch - 1])
			{
				case 32:
				case 9:
				case 10:
				case 44:
				case 59:
				case 46:
				case 33:
				case 63:
				case 34:
				case 40:
				case 41:
				case 123:
				case 125:
					cap[ch] = cap[ch] - 32;
			}
		}
		ch++;
	}
	return (cap);
}
