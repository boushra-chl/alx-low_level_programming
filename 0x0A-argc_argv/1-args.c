#include <stdio.h>

/**
 * main - function that prints the number of arguments passed to it
 * @argc: integer, number of arguments passed
 * @argv: pointer to char, array of arguments passed
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	argc = 0;
	while (argv[argc])
	{
		argc++;
	}
	printf("%d\n", argc - 1);
	return (0);
}
