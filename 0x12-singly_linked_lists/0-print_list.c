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
	list_t *temp;

	temp = h;
	while (temp != NULL)
	{
		temp->len = strlen(temp->str);
		printf("[%d] ", temp->len);
		if (temp->str == NULL)
			printf("(nil)\n");
		printf("%s\n", temp->str);
		temp = temp->next;
		node++;
	}
	return (node);
}


