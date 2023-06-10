#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the resulls of multiplication
 * followed by a new line
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: 0 on Success and 1 on failure
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int mul = 0;

	if (!argv[1] || !argv[2])
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mul);
	return (0);
}
