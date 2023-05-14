/**
 * main - function that prints a program name
 * @argc: integer size of command line arguments
 * @argv: char, pointer to command line arguments
 * Return: 0 (Success)
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
	argc = 0;

	while (argv[argc])
	{
		argc++;
	}
	printf("%d\n", argc);
	return (0);
}
