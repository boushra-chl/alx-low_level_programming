#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function appends the src string to the dest string, 
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @s1: string source
 * @s2: string destination
 *
 * Return: pointer to char
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, j;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	new = malloc((len1 + len2 + 1) * sizeof(char));
	if (new == NULL)
	{
		free(new);
		return NULL;
	}
	for (i = 0; i < len1; i++)
		new[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		new[i] = s2[j];
	new[len1 + len2 + 1] = '\0';
	return (new);
}
