#include "main.h"

/**
 * _strdup - a funct that returns a pointer to a newly allocated space in memor
 *
 * @str:  which contains a copy of the string given as a parameter.
 *
 * Return: Char
 */

char *_strdup(char *str)
{
	char *array;
	int a = 0;

	if (str == NULL)
		return (NULL);

	while (str[a])
		a++;

	array = malloc(sizeof(char) * a + 1);

	if (array == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		array[a] = str[a];
	array[a] = '\0';
	
	return (array);


}
