/**
 * main - function that prints a program name
 * @argc: integer size of command line arguments
 * @argv: char, pointer to command line arguments
 * Return: 1 or 0 (Success)
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] ; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
			printf("Error\n");
			return (1);
			}
		}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
