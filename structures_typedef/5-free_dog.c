#include "dog.h"

/**
 * free_dog - Write a function that frees dogs.
 *
 * @d: Structc dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

