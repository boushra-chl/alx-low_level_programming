#include <stdio.h>
#include "main.h"

int is_prime(int n, int i);

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise returns 0
 * @n: integer
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, n - 1));
}

/**
 * is_prime - calculates if a number is a prime number
 * @n: integer
 * @i: iterator
 *
 * Return: 1 if prime, otherwise 0
 */

int is_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (is_prime(n, i -1));
}

