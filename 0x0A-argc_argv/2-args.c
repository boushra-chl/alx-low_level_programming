#include <stdio.h>

/**
 * main - function that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of a arguments
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	argc = 0;
	for (argc = 0; argv[argc]; argc++)
		printf("%s\n", argv[argc]);
	return (0);
}
