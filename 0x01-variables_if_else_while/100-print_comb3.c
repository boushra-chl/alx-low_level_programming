#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 * Return: 0 (Suceess)
 */
	int main(void)
{
	int n;
	int m;

	for (n = 0 ; n <= 9 ; n++)
{
	for (m = 0 ; m <= 9 ; m++)
	{		
	putchar(48 + n);
	putchar(48 + m);
	if (m == 9 && n == 9)
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
