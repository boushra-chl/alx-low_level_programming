/**
 * _memcpy - function that copies n bytes from memory area
 * pointed to by src to memory area pointed to by dest
 * @n: size of memory area to be filled
 * @src: pointer to memory area to be copied
 * @dest: pointer to memory area to be copied to
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
