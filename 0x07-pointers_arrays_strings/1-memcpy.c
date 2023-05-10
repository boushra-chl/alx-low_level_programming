/**
 * _memcpy - function that copies given number of bytes
 * @src: string to be copied from
 * @dest: string to be copied to
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
