/**
 * main - function that prints the number of arguments pased
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: Always 0 (Succes)
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	argc = 0;
	while (argv[argc])
	{
		argc++;
	}
	printf ("%d\n", argc);
	return (0);
}
