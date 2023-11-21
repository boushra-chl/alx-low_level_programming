#include "lists.h"
#include <unistd.h>
/**
 * print_listint - function that prints elements of listint_t
 * without the use of printf
 * @h: pointer to head
 *
 * Return: number of elments
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		node = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}

