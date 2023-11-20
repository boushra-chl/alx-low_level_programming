#include "lists.h"

/**
 * list_len - function that returns the number of elemnts of a list
 * @h: pointer to list_t
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;
	if (h == NULL)
		node = 0;
	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}

