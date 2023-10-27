#include <stdio.h>

/**
 * * main - program thet prints it's name
 * * @argc: number of arguments
 * * @argv: array of arguments
 * *
 * * Return: 0 Always
 * */

int main(int argc, char *argv[])
{
	argc = 0;

	while(argv[argc])
	{
		argc++;
	}
	printf("%d\n", argc - 1);
	return (0);
}
