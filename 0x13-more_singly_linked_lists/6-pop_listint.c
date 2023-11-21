#include "lists.h"

/**
 * pop_listint - function that deletes the head node and returns
 * the head node's data n
 * @head: pointer to pointer to n
 *
 * Return: n
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
