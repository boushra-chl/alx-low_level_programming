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
	list_t *new_head;
	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);
	if (str)
	{
		new_head->str = strdup(str);
		new_head->len = _strlen(strdup(str));
	}
	if (!new_head->str)
	{
		free(new_head);
		return (NULL);
	}
	new_head->next = *head;
	(*head) = new_head;
	return (new_head);
}

/**
 * _strlen - function that return the length of a string
 * @s: string
 *
 * Return: length of string s
 */
unsigned int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

