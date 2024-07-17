#include "search_algos.h"

/**
 * linear_search - function that searches for value using the Linear search
 * @array: array of integers
 * @size: the size of the array
 * @value: value to search for in the array
 *
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("array[%ld] = [%d]\n", i, array[i]);
		if (array[i] != value)
			i++;
		else
			return (i);
	}
	return (-1);
}
