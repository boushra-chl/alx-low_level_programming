#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory which contains a copy of the string given
 * as a parameter
 * @str: pointer to string
 *
 * Return: pointer to new string or NULL
 */

char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return NULL;
	while (str[len])
	{
		len++;
	}
	dup = malloc(len * sizeof(char));
	if (dup == NULL)
	{
		free(dup);
		return NULL;
	}
	for (i = 0; i <= len; i++)
		dup[i] = str[i];
	return (dup);
}
