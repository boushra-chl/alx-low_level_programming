/**
 * print_to_98 - print natural numbers from n to 98
 * @n: integer, print numbers fro given value of n
 * Return: void
 */
#include "main.h"
#include <stdio.h>
	void print_to_98(int n)
{
	int d;

	if (n <= 98)
	{
		for (d = n ; d <= 98 ; d++)
		{
		printf("%d", d);
			if (d == 98)
			{
			continue;
			}
		printf(", ");
		}
	}
	else
	{
		for (d = n ; d >= 98 ; d--)
		{
		printf("%d", d);
			if (d == 98)
			{
			continue;
			}
		printf(", ");	
		}
	}
	printf("\n");
}
