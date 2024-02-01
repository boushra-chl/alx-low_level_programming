#include "lists.h"
/**
 * add_dnodeint_end - function that adds a node at the end
 * @head: pointer to dlistint_t
 * @n: element to insert
 *
 * Return: pointer to new added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return NULL;

	new_node->n = n;
	new_node->next = NULL;
	if ((*head) == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	last_node = (*head);
	while ((last_node->next) != NULL)
		last_node = last_node->next;
	new_node->prev = last_node;
	last_node->next = new_node;
	return (new_node);
}
