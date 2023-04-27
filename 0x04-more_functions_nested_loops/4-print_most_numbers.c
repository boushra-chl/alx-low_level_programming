/**
* print_most_numbers - function that prints numbers from 0 to 9
* except 2 and 4
* Return: 0 (Success)
*/
#include "main.h"
void print_most_numbers(void)
{
	char c;

	for (c = 48 ; c <= 57 ; c++)
	{
	if (c == 50 || c == 52)
	{
	continue;
	}
	_putchar(c);
	}
	_putchar('\n');
}

