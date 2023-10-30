#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - function that returns a pointer to a newly
 * allocated space in memory that contains s1 followed by s2
 * @s1: pointer to string
 * @s2: pointer to string
 *
 * Return: pointer to the concatenated string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int len1, len2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	p = malloc((len1 + len2 + 1) * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j <= len2; i++, j++)
	{
		p[i] = s2[j];
	}
	return (p);
}
