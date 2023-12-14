#include "main.h"

/**
 * print_binary - function that prints binary representation
 * @n: number to convert to binary
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int bits;
	int i, bit;
	unsigned long int temp;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (temp = n, bits = 0; (temp >>= 1) > 0; bits++);
	for (i = bits; i>= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit == 1)
			_putchar('1');
		else if (bit == 0)
			_putchar('0');
	}
	_putchar('\n');
}
