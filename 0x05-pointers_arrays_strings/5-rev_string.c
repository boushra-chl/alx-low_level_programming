/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * Return: void
 */
#include "main.h"
void rev_string(char *s)
{
	int i = 0, len, temp;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (i = 0 ; i < len / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
