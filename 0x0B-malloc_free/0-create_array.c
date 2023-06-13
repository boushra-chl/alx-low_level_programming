#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with specific char
 * @size: unsigned int, size of char
 * @c: character
 *
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return NULL;

	p = malloc(size * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return NULL;
	}
	for (i = 0; i <= size; i++)
		p[i] = c;
	return (p);
}
