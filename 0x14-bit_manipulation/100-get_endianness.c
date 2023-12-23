#include "main.h"

/**
 * get_endianness - function that checks endianness
 *
 * Return: integer
 */

int get_endianness(void)
{
	struct EndiannessCheck check_endian = {1, {0}};

	if (check_endian.c[0] == 1)
		return (0);
	else
		return (1);
}

