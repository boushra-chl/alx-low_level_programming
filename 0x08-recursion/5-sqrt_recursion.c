/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer
 * Return: integer
 */
#include "main.h"
int _sqrt_recursion(int n)
{
	int d;
	if (n % 2 != 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1);
	{
		return (1);
	}
	else
	{
		return(_sqrt_recursion((n % 2) / 2);
	}	
