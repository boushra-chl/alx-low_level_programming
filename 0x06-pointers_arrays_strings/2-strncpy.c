/**
 * _strncpy - function that copies n bytes from
 * string to another string.
 * @n: number of bytes to be copied
 * @src: pointer to string to be copied
 * @dest: pointer to string to be copied into
 * Return: pointer to dest
 */
#include "main.h"
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	i = i;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

