#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - returns pointer to the allocated memory
 * @b: unsigned int
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	return (p);
}
