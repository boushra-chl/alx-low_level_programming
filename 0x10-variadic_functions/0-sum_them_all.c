/**
 * sum_them_all - function that returns the sum of all it's parameters
 * @n: constant unsigned integer
 * Return: 0 or sum of all arguments
 */
#include <stdio.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	if (n)
	{
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(ap, int);
		}
		va_end(ap);
	}
	return (sum);
}


