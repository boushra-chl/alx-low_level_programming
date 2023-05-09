/**
 * print_diagsums -  function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array, matrix
 * @size: size of diagonal
 * Return: 0 (Success)
 */
#include "main.h"
#include <stdio.h>
void print_diagsums(int *a, int size)
{
int i, j;
int sum1 = 0;
int sum2 = 0;

for (i = 0 ; i < size - 1 ; i++)
{
	for (j = 0 ; j < size ; j++)
	{
		if (i == j)
		{
			sum1 = sum1 + a[i][j];
		}
		if (i == size - 1 - j)
		{
			sum2 = sum2 + a[i][j];	
		}
	}
}
printf("%d, %d\n", sum1, sum2);
}
