/**
 * _strcmp - function that compares two strings and returns the result
 * @s1: string to be compared to
 * @s2: string to be compared
 * Return: integer, result of comparison
 */
#include "main.h"
int _strcmp(char *s1, char *s2)
{
	int i = 0, len1 = 0, len2 = 0, len = 0, n = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	len1 = i;

	i = 0;
	while (s2[i] != '\0')
	{
		i++;
	}
	len2 = i;

	if (len1 <= len2)
		len = len2;
	else
		len = len1;
	for (i = 0; i < len ; i++)
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
		{
			n = s1[i] - s2[i];
			break;
		}
	}
	return (n);
}
