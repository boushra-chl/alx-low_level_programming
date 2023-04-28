/**
 * print_square - function that prints a square followed by new line
 * @size: the size of square to be printed
 */
#include "main.h"
void print_square(int size)
{
	int i, j;

	for (i = size ; i > 0 ; i--)
	{
		for (j = size ; j > 0 ; j--)
		{
		_putchar(35);
		}
	_putchar('\n');
	}
	if (size <= 0)
	_putchar('\n');
}
