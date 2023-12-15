#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * at given index
 * @n: pointer to unsigned long int
 * @index: unsigned int, given index
 *
 * Return: 1 on Success and -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	else
	{
		(*n) = ~(1 << index) & (*n);
		return (1);
	}
}
