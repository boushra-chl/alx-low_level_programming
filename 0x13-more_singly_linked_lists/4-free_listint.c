#include "lists.h"

/**
 * free_listint - function that frees a listint_t
 * @head: pointer to head
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (head == NULL)
		return;
	while (temp != NULL)
	{
		free(temp->next);
	}
	free(temp);
}	
