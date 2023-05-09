/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character to be located
 * Return: pointer to s
 */
#include "main.h"
#include <stddef.h>
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}
return (NULL);
}
