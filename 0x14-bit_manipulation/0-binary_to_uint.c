#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts binary to unsigned int
 * @b: binary number
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		n <<= 1;
		n += b[i] - '0';
		i++;
	}
	return n;
}

