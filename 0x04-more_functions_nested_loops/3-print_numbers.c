/**
 * print_numbers - function that prints numbers from 0 to 9
 * Return: 0 (Success)
 */
#include "main.h"
void print_numbers(void)
{
	char c;

	for (c = 48 ; c <= 57 ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
