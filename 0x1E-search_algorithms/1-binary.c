#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elments in array
 * @value: value to search for
 *
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{

	size_t  L = 0, R = size - 1;
	size_t i, m = 0;

	if (array == NULL)
		return (-1);
	while (L <= R)
	{
		printf("Searching in array:");
		for (i = L; i <= R; i++)
		{
			if (i == R - 1)
				printf("%d", array[i]);
			else 
				printf("%d, ", array[i]);
		}
		printf("\n");

		m = (L + R) / 2;
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return m;
	}
	return (-1);
}
