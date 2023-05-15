/**
 * _strdup - function that returns a pointer to a newly allocated
 * space that contains a copy of a string given as parameter
 * @str: string
 * Return: pointer to char
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	int size, i = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	size = i;
	s = malloc(size * sizeof(char));
	for (i = 0 ; i < size ; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
