/**
 * main - program that prints the first 50
 * Fibonacci numbers, starting with 1 and 2, followed by a new line
 * Return: 0 (Succes)
 */
#include <stdio.h>
int main(void)
{
	int n = 0;
	long d = 1, p = 2;

	while (n < 50)
	{
		if (n == 0)
		printf("%d", n);
		else if (n == 1)
		printf("%ld", d);
		else
		{
		p = p + d;
		d = p - d;
		printf(", %ld", p);
		}
	++n;
	}
	printf("\n");
	return (0);
}
