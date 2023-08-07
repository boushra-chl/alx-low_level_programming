/**
 * main - function that creates an array of chars
 * and initilizes it with a specific char
 * @size: size of the array to be created
 * @c: character to initilize the array with
 *
 * Return: NULL or pointer to the array
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);

	if (size == 0 || p == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		p[size] = c;
	}
	return (p);
}
