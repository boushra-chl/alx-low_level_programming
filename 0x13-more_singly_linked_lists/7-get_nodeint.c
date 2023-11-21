#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of
 * a listint_t linked list
 * @head: pointer to head
 * @index: index of node to return
 *
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}

