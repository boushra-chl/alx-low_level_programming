#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - counts length of string
 * @s: string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return(count);
}
