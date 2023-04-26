/**
 * times_table - function that prints the 9 times table, starting with 0
 * Return: void Always.
 */
#include "main.h"
	void times_table(void)
{
	int n, d, p, q, z, m;

	for (n = 0 ; n <= 9 ; n++)
	{
		for (d = 0 ; d <= 9 ; d++)
		{
		p = d * n;
			if (p > 9)
			{
				q = p % 10;
				m = p - q;
				z =  m / 10;
				_putchar(44);
				_putchar(32);
				_putchar(z + '0');
				_putchar(q + '0');
			}
			else
			{
			if (d != 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}	
				_putchar(p + '0');
			}
		}
	_putchar('\n');
	}
}
