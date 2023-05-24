/**
 * int_index - function that searches for an integer
 * @array: pointer to array of integers
 * @size: integer, size of array
 * @cmp: pointer to the function used to compare values
 * Return: integer or -1
 */
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}
	return (-1);
}
