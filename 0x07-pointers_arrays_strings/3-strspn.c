/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: string
 * @accept: string to be looked for
 * Return: number of bytes found
 */
#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	unsigned int n = 0;
	char *s1, *s2;

	s1 = s;
	s2 = accept;

	while (s1[i] != '\0')
	{
		while (s2[j] != '\0')
		{
			if (s2[j] == s1[i])
			{
			n = n + 1;
			break;
			}
		j++;
		}
	if (s[i] != accept[j])
	{
		break;
	}
	i++;
	}
	return (n);
}
