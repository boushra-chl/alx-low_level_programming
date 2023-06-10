#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that adds positive numbers
 * if no number is passed, print 0 followed by a new line
 * if one of the numbers containes characters that are not
 * digits, print Error and return 1
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return 0 on Success and 1 on Failure
 */
int main(int argc, char *argv[])
{
	int add;
	int i;

	if (argv[1] == 0)
		add = 0;
	for (argc = 1; argv[argc]; argc++)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (argv[argc][i] < 48 || argv[argc][i] > 57)
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

