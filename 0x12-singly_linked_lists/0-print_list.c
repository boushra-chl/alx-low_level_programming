#include "lists.h"

/**
 * print_list - function that prints all elements of list_t list
 * @h: pointer to the structure list_t
 * 
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("[%d] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		printf("%s\n", h->str);
		h = h->next;
		node++;
	}
	return (node);
}


