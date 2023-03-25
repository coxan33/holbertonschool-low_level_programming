#include "function_pointers.h"

/**
 * array_iterator - that execut a funct given as a parameter on each elmnt an[]
 *
 * @array: Array
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int contador = 0;

	if (array == NULL || action == NULL)
		return;

	for (contador = 0; contador < size; contador++)
	{
		(*action)(array[contador]);
	}
}
