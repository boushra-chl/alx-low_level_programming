#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you need to flip to get from one number to another
 * @n: given number
 * @m: number we want to get after fliping bits
 *
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_num;
	unsigned int  flipped = 0;

	xor_num = n ^ m;
	while (xor_num != 0)
	{
		flipped = flipped + (xor_num & 1);
		xor_num = xor_num >> 1;
	}
	return (flipped);
}
