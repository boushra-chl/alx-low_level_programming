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
	unsigned long int temp;
	int i = 63, count = 0;

	while (i >= 0)
	{
		temp = n >> i;
		if (temp & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	i++;
	if (!count)
		_putchar('0');
}



