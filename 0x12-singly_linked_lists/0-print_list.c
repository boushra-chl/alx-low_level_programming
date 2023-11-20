#include "lists.h"

/**
 * print_list - function that prints elements of a list
 * @h: pointer to structure
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", h->len);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		node++;
		h = h->next;
	}
	return (node);
}
