/**
 * multiples_3_5 -  function that prints multiples of 3 and 5 below 1024
 * Return: integer, sum of all multiples
 */
#include "main.h"
#include <stdio.h>
	int multiples_3_5(void)
{
	int n, p, q, sum;

	sum = 0;
	for (n = 0 ; n <= 1024 ; n++)
	{
	p = n % 5;
	q = n % 3;
		if (q == 0)
		{
		sum = sum + n;
		}
		else if (p == 0)
		{
		sum = sum + n;
		}
	}
	return (sum);
}
