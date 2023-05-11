/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number otherwise returns 0
 * @n: integer
 * Return: integer 0 or 1
 */
#include "main.h"
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}

/**
 * _prime - function that checks if a number is prime number
 * @n: integer
 * @i: integer, incrementer
 * Return: integer 1 or 0
 */

int _prime(int n, int i)
{

	if (i == n)
		return (1);
	if (n % i == 0 && i != n)
		return (0);
	return (_prime(n, i + 1));
}
