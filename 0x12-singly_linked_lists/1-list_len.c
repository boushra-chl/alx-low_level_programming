#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 * @h: pointer to list_t
 *
 * Return: number of elements in list_t
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}	
