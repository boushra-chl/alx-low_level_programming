/**
 * main - program that prints the numbers from 1 to 100,
 * followed by a new line.
 * But for multiples of three print Fizz
 * instead of the number and for the multiples
 * of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz
 * Return: 0 (Success)
 */
#include <stdio.h>
	int main(void)
{
	int n, p, q;

	for (n = 1 ; n <= 100 ; n++)
	{
	p = n % 3;
	q = n % 5;
		if (p == 0 && q != 0)
		{
		printf("Fizz ");
		}
		else if (q == 0 && p != 0)
		{
		printf("Buzz ");
		}
		else if (q == 0 && p == 0)
		{
		printf("FizzBuzz ");
		}
		else
		{
		printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}

