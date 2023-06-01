#include "lists.h"

/**
 * add_node_end - function that adds a new node
 * qt the end of a list_t
 * @head: pointer to pointer to last list_t
 * @str: string to be added
 *
 * Return: pointer to the new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last;
	list_t *end_node;

	last = *head;
	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);
	end_node->str = strdup(str);
	end_node->len = strlen(strdup(str));
	end_node->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = end_node;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = end_node;
	}
	return (end_node);
}

