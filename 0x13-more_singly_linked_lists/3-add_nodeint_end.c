#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of a list
 * @head: pointer to pointer to head
 * @n: number to be stored in new list
 *
 * Return: pointer to added node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end;
	listint_t *temp = *head;
	
	new_end = (listint_t *) malloc(sizeof(listint_t));
	if (new_end == NULL)
		return (NULL);
	new_end->n = n;
	new_end->next = NULL;
	if (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_end;
	return (new_end);
}
