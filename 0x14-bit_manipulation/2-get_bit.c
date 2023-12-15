#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * at a given index
 * @n: unsigned long int, number given
 * @index: index for which return bit
 *
 * Return: 1 or 0 or -1 in fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_to_extract;

	if (index > 64)
		return (-1);
	bit_to_extract = (n >> index) & 1;
	return (bit_to_extract);
}

