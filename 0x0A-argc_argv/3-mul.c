/**
 * main - print multiplication of 2 numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (1);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
