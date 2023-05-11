/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number otherwise returns 0
 * @n: integer
 * Return; integer 0 or 1
 */
#include "main.h"
int is_prime_number(int n)
{
	return (_prime(n, 1));
}

int _prime(int n, int i)
{
	
	if (n % i && i != n) 
	return (0);
	if (n % i && i == n)
	return (1);
	else
	return (_prime(n, i + 1));
}
