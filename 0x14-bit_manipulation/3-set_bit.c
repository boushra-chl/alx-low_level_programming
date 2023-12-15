#include "main.h"

/**
 * set_bit - function that sets a bit at a given index to 1
 * @n: pointer to unsigned long int, gven number
 * @index: given index
 *
 * Return: 1 on Success and -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	else
	{
		(*n) = (1 << index) | (*n);
		return (1);
	}
}

