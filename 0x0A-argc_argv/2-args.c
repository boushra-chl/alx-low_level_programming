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
	for (argc = 0; argv[argc]; argc++)
	{
		printf("%s\n", argv[argc]);
	}
	return (0);
}

