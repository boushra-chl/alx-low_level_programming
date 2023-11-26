#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints th binary representation of a number
 * @n: unsigned int
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int bit, printed = 0;

	bit = sizeof(n) * 8;
	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}

