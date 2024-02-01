#include "lists.h"
/**
 * dlistint_len - function that returns number of elements
 * @h: pointer to dlistint_t
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num_elm = 0;

	while (h != NULL)
	{
		num_elm++;
		h = h->next;
	}
	return (num_elm);
}
