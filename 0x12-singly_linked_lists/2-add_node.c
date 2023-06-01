#include "lists.h"

/**
 * add_node - function that adds a new node at
 * the beginning of a list_t list
 * @head: pointer to pointer to the first node
 * @str: string to be added
 * 
 * Return: adress of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	*head = malloc(sizeof(struct list_t));
	*head->str = strdup(str);
	*head ->len = _strlen(str);
	if (*head == NULL)
	{
		free(*head);
		return (NULL);
	}
	return (*head);
}
