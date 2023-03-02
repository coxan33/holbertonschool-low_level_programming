#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @ch: string yo uppercase
 *
 * Return: ch
 */

char *string_toupper(char *ch)
{
	int change = 0;

	while (ch[change++])
	{
		if (ch[change] >= 97 && ch[change] <= 122)

			ch[change]  = ch[change] - 32;
	}
	return (ch);
}
