/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: unsigned int, number of bytes to concatenate from s2
 * Return: pointer to the newly allocated space
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j;
	unsigned int size1, size2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	size1 = i;
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
	}
	size2 = i;

	if (n >= size2)
		n = size2;

	s = malloc (sizeof(*s) * (size1 + n + 1));

	if (s == NULL)
	{
		return (NULL);
		free(s);
	}
		for (i = 0 ; i < size1 ; i++)
		{
			s[i] = s1[i];
		}
		for (j = 0 ; j < n ; j++, i++)
		{
			s[i] = s2[j];
		}
		s[size1 + n + 1] = '\0';
		return (s);
}
