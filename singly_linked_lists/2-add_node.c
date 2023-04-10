#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: The first node
 * @str: The string
 * Return: returns the adress of the new node
**/
list_t *add_node(list_t **head, const char *str)
{
	char *doble;
	int i;
	list_t *nuevo;

	nuevo = malloc(sizeof(list_t));
	if (nuevo == NULL)
	{
		return (NULL);
	}
	doble = strdup(str);
	if (doble == NULL)
	{
		free(nuevo);
		return (NULL);
	}
	for (i = 0; str[i] != '\0';)
		i++;
	nuevo->str = doble;
	nuevo->len = i;
	nuevo->next = *head;
	*head = nuevo;
	return (nuevo);
}
