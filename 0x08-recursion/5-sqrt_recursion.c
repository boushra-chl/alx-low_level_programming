#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: number to which we calculate the square root
 *
 * Return: integer, the square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_help(n, 1));
}

/**
 * _sqrt_help - finds the root square of a number
 * @n: integer
 * @d: integer, divisor
 *
 * Return: root square
 */
int _sqrt_help(int n, int d)
{
	if (n < 0)
		return (-1);
	if (d * d > n)
		return (-1);
	if (d * d == n)
		return (d);
	return (_sqrt_help(n, d + 1));
}
