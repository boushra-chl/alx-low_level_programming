#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 * Return: 0 (Suceess)
 */
	int main(void)
{
	int n;
	int m;
	int d;

	for (n = 0 ; n <= 8 ; n++)
{
		for (m = n + 1 ; m <= 9 ; m++)
		{
			for (d = m+1 ; d <= 9 ; d++)
			{
				if (n != m && n != d && m != d)
				{
				putchar(48 + n);
				putchar(48 + m);
				putchar(48 + d);
				}
				if (n == 7 && m == 8 && d == 9)
				{
				continue;
				}
			putchar(',');
			putchar(' ');
			}
		}
}
			putchar('\n');
	return (0);
}
