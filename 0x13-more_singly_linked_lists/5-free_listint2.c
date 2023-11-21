#include "lists.h"

/**
 * * free_listint2 - function that frees a listint_t
 * * @head: pointer to pointer to head
 * *
 * * Return: Nothing
 * */

void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		free((*head)->next);
	}
	free(*head);
	*head = NULL;
}

