#include <stdio.h>
#include <stdlib.h>

/**
 * * main - program thet prints it's name
 * * @argc: number of arguments
 * * @argv: array of arguments
 * *
 * * Return: 0 Always
 * */

int main(int argc, char *argv[])
{
	int mul;

	while (argv[argc])
	{
		argc++;
	}
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
