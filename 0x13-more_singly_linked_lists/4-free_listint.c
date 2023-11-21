#include "lists.h"

/**
 * free_listint - function that frees a listint_t
 * @head: pointer to head
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}	
