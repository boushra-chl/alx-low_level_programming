/**
 * _strlen -  function that returns the length of a string
 * @s: string to be checked
 * Return: integer, the lengh of the string
 */
#include "main.h"
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
	i++;
	s++;
	}
	return (i);
}
