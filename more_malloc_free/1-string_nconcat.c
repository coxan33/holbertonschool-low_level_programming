#include "main.h"

/**
 * string_nconcat - Write a function that concatenates two strings.
 *
 * @s1: String 1
 * @s2: String 2
 * @n: Delimit of s2
 *
 * Return: Int
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	array = malloc(sizeof(char) * (strlen(s1) + n + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < (strlen(s1) + n); i++)
	{
		if (i < strlen(s1))
			array[i] = s1[i];

		else if (i >= strlen(s1))
		{
			array[i] = s2[j];
			j++;
		}
	}
	array[i] = '\0';

	return (array);
}
