/**
 * main - function that prints the program name
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * return: integer
 */

#include <stdio.h>
#include <stdlib.h>

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
