/**
 * array_range - function that creates an array of integers
 * @min: integer, the minimum value of integers
 * @max: integer, the maximum value
 * Return: pointer to the newly created array
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(*p) * (min + max + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min ; i < min + max + 1; i++)
	{
		*((int *)(p) + i) = i;
	}
	return (p);
}
