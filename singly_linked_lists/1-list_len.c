#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to the list
 * Return: returns the number of nodes
**/
size_t list_len(const list_t *h)
{
	size_t x = 0;
		while (h)
		{
			x++;
			h = h->next;
		}
	return (x);
}
