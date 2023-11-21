#include "lists.h"

/**
 * add_nodeint - function that adds a node at the begenning
 * of a listint_t list
 * @head: pointer to pointer to head
 * @n: number to be stored
 *
 * Return: pointer to addaed node or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t*) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
