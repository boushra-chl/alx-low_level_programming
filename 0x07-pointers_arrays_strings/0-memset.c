/**
 * _memset - function that fills the first n bytes
 * of the memory area pointed to by s with the constant byte b
 * @s: pointer to memory area
 * @n: number of bytes to be filled
 * @b: char to be filled with
 * Return: pointer to s
 */
#include "main.h"
	char *_memset(char *s, char b, unsigned int n)
	{
		int i;

		for (i = 0 ; i < n ; i++)
		{
			s[i] = b;
		}
	return (0);
	}
