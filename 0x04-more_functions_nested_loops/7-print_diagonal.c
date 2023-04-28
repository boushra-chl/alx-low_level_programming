/**
 * print_diagonal - function that prints a diagonal in the terminal
 * @n: number of times the character / should be printed
 */
#include "main.h"
	void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	_putchar('\n');
	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < i ; j++)
		{
			_putchar(32);
		}
		_putchar(92);
	_putchar('\n');
	}
}
