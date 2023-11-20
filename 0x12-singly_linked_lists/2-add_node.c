#include "lists.h"

/**
 * add_node - function that adds a node to a linked list
 * @head: pointer to pointer to first node
 * @str: string to be dublicated
 *
 * Return:pointer to list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}

