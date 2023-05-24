/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of ana array
 * @array: pointer to integer
 * @size: size_t
 * @action: pointer to function void action(int)
 * Return: Nothing
 */
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int n = size;

	if (!array || !action)
		return;
	for (i = 0; i < n; i++)
	{
		action(array[i]);
	}
}
