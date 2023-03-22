#include "dog.h"
#include <string.h>

/**
 * new_dog - Write a function that creates a new dog.
 *
 * @name: struct dog
 * @age: age
 * @owner: owner
 *
 * Return: Int
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	unsigned int dogcont;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}
	newdog->name = malloc(strlen(name) + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		free(newdog->name);
		return (NULL);
	}
	newdog->owner = malloc(strlen(owner) + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	for (dogcont = 0; dogcont < strlen(name); dogcont++)
		newdog->name[dogcont] = name[dogcont];
	newdog->name[dogcont] = '\0';

	for (dogcont = 0; dogcont < strlen(owner); dogcont++)
		newdog->owner[dogcont] = owner[dogcont];
	newdog->owner[dogcont] = owner[dogcont];
	newdog->age = age;
	return (newdog);



}
