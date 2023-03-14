#include "main.h"

/**
 * *str_concat - He who is not courageous enough to take risks will accomplish
 * @s1: Werite a function
 * @s2: that concatenates two strings
 *
 * Return: Char
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	int string1 = 0;
	int b = 0;
	int a = 0;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	string1 = strlen(s1) + strlen(s2);
	array = malloc(sizeof(char) + string1 + 1);

	if (array == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		array[a] = s1[a];

	for (b = 0; s2[b] != '\0'; b++)
		array[a + b] = s2[b];

	return (array);
}
