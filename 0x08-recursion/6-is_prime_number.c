#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - function that returns 1 if the input is
 * a prime number, otherwise it returns 0
 * @n: integer
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - function that looks if the number is prime
 * @n: integer, number to check
 * @d: integer, divisor
 *
 * Return: 1 or 0
 */
int check_prime(int n, int d)
{
	if (n == 1)
		return (0);
	if (n % d == 0 && d != n)
		return (0);
	if (n % d == 0 && d == n)
		return (1);
	return (check_prime(n, d + 1));
}

