#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - function that adds numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int add = 0;
	int i;

	while (argv[argc])
	{
		argc++;
	}
	if (argc == 1)
	{
		printf("0\n");
	}
	for (argc = 1; argv[argc]; argc++)
	{
		for (i = 0; i < (int)strlen(argv[argc]); i++)
		{
			if (!isdigit(argv[argc][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + atoi(argv[argc]);
	}
	printf("%d\n", add);
	return (0);
}

