#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 * Return: 0 (Suceess)
 */
	int main(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
{
	putchar(48 + n);
}
	putchar('\n');
	return (0);
}
