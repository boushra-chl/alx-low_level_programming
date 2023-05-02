/**
 * swap_int - function that swaps the values of two integers
 * @a: integer
 * @b: integer
 * Return: void
 */
#include "main.h"
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
