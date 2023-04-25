/**
 * print_sign - function that prints the sign of a number
 * Return: 1 if the number is greater than 0
 * 0 if the number is 0
 * -1 if the number is less than 0
 * @n: checked number
 */
#include "main.h"
	int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
