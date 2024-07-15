#include "search_algos.h"

/**
 * int linear_search - function that searches for a value in an array using the Linear search algorithm
 * @array: array of integers
 * @size: the size of the array
 * @value: value to search for in the array
 *
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int index = -1;

	while (i < size)
	{
		printf("array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			index = i;
			break;
		}
		else
			i++;
	}
	return index;
}
