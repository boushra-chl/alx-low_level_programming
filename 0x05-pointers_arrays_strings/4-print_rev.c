/**
 * print_rev - function that prints a string, in reverse, followed by a new line
 * @s: char
 * Return: void
 */
#include "main.h"
	void print_rev(char *s)
{
	int len = 0, i = 0, temp, j;

	while (s[i] != '\0')
	{
		i++;
	}
		len = i;

	for (j = 0 ; j < len / 2 ; j++)
	{
		temp = *(s + j);
		*(s + j) = *(s + len - j - 1);
		*(s + len - j - 1) = temp;
	}
}
