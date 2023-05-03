/**
 * print_array -  function that prints n elements of
 * an array of integers followed by a new line
 * @n: number of elements to be printed
 * @a: array of elements
 * Return: void
 */
#include "main.h"
#include <stdio.h>
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		{
			continue;
		}
		else
		{
			printf(", ");
		}
	}
	printf("\n");
}

