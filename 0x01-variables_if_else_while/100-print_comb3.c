#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 * Return: 0 (Suceess)
 */
	int main(void)
{
	int n;
	int m;

	for (n = 0 ; n <= 8 ; n++)
{
	for (m = n + 1 ; m <= 9 ; m++)
	{
		if (n != m)
		{
			putchar(48 + n);
			putchar(48 + m);
		}
		if (n == 8 && m == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
}
	putchar('\n');
	return (0);
}
