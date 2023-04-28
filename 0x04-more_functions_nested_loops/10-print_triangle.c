/**
 * print_triangle - function that prints a triangle followed by new line
 * @size : integer, size of tringle
 * Return: void
 */
#include "main.h"
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	_putchar('\n');
	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j <= size ; j++)
		{
			if (j < size - i)
			{
				_putchar(32);
			}
			else
			{
			_putchar(35);
			}
		}
		_putchar('\n');
	}
}
