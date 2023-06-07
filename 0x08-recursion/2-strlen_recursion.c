#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{

	if (s == NULL)
		return (0);
	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}
