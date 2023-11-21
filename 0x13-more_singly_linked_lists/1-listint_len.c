#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: pointer to head
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
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
