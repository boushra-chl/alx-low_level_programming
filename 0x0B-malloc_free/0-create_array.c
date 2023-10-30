#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific
 * @size: unsigned integer
 * @c: string
 *
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size * sizeof(char));
	if (p == NULL)
	{
		return NULL;
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
