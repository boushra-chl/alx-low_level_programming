/**
 * main - Functio that prints the aiphabet in lowercase followed by new line
 * Return: 0 (Success)
 */
#include "main.h"

	void print_alphabet(void)
{
	/**
	 * print_alphabet - prints the alphabet in lowercase
	 * Return: 0 (Success)
	 */
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
