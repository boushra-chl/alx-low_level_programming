/**
 * str_concat - function that concatenates two strings
 * @s1: pointer to the characters of first string
 * @s2: pointer to the string of second string
 * Return: pointer to char, the new string
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		s[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		s[k] = s2[j];

	return (s);
}
