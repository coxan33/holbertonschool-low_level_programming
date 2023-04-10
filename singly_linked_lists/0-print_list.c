#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list
 * @h: the list
 * Return: returns the size
**/
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		x++;
		h = h->next;
	}
	return (x);
}
