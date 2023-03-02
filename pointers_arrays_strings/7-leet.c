#include "main.h"

/**
 * *leet - Write a function that encodes a string into 1337.
 *
 * @ch: Change letters
 *
 * Return: ch
 */

char *leet(char *ch)
{
	int contletter = 0;
	int contnumber = 0;
	char *letter = "aAeEoOtTlL";
	char *number = "4433007711";

		for (contletter = 0; ch[contletter]; contletter++)
		{
			for (contnumber = 0; letter[contnumber]; contnumber++)
				if (ch[contletter] == letter[contnumber])
					ch[contletter] = number[contnumber];
		}
	return (ch);
}
