/**
 * _calloc - function that allocates memory for an array using malloc 
 * @nmemb: number of elements of the array
 * @size: number of bytes 
 * Return: pointer to the allocated memory or NULL if fails
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0) 
		return (NULL);
	p = malloc (size * nmemb);
	if (p == NULL)
	{
		return (NULL);
		free(p);
	}
	return (p);
}

