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
	int sum = 0, i;

	for (i = 1 ; i < argc ; i++)
	{
		if (*argv[i] < 48 || *argv[i] > 57)
		{
			printf("Error\n");
			return (1);
			break;
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
