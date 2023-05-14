/**
 * main - function that prints a program name
 * @argc: integer size of command line arguments
 * @argv: char, pointer to command line arguments
 * Return: 0 (Success)
 */
#include <stdio.h>
int main(int argc, char* argv[])
{
	int i;

	printf ("%s\n", argv[0]);
	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
