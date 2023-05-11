/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer
 * Return: integer
 */
#include "main.h"
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 1));
}

/**
 * _sqrt - function that returns the square root of a number
 * @n: integer
 * @i: integer, divisor
 * Return: integer
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
