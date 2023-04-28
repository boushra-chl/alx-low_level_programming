/**
 * print_line - function that prints a line in the terminal
 * @n: the number of times the charecter n should be printed
 */
#include "main.h"
void print_line(int n)
{
	int i;

	for (i = n ; i > 0 ; i--)
	{
		_putchar(95);
	}
	_putchar('\n');
}
