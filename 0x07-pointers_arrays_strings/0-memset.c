/**
 * _memset - function that fills the first n bytes of memory area
 * pointed to by s with a constant char b
 * @n: size of memory area to be filled
 * @s: pointer to memory area
 * @b: constant char
 * Return: pointer to s
 */
#include "main.h"
 char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
