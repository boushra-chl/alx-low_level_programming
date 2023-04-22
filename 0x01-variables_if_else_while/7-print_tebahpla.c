#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 * Return: 0 (Suceess)
 */
	int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
{
	putchar(ch);
}
	putchar('\n');
	return (0);
}
