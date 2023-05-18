/**
 * malloc_checked - function that allocates memory using malloc
 * @b: unsigned int
 * Return: pointer to allocated memory
 */
#include "main.h"
#include <stdlib.h>
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
