#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory
 * @str: pointer to string
 *
 * Return: pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
	char *p;
	int len, i;
	
	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	p = malloc((len + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		p[i] = str [i];
	}
	return (p);
}

