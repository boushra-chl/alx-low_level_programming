#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns the factorial of a number
 * @n: number to which we are calculating thr factorial
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
