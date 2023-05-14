/**
 * main - function that prints a program name
 * @argc: integer size of command line arguments
 * @argv: char, pointer to command line arguments
 * Return: 1 or integer (Success)
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int mul;

	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (mul);
}
