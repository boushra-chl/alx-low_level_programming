/**
 * main - Functio that prints the aiphabet in lowercase followed by new line
 * Return: 0 (Success)
 */
#include "main.h"

	void print_alphabet(void)
{
	/*Function that prints alphabet in lower case*/
	char c;
	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
