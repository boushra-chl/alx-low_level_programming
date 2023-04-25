/**
 * print_alphabet_x10 - Function that prints ten times
 * the alphabet in lowercase
 * Return: void
 */
#include "main.h"
	void print_alphabet_x10(void)
{
	int n;
	char c;

	for (n = 0 ; n <= 9 ; n++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
		_putchar(c);
		}
	_putchar('\n');
	}
}
