/**
 * _strcat - function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @src: string to be concatenated
 * @dest: string to be concatenated into
 * Return: pointer to dest
 */
#include "main.h"
char *_strcat(char *dest, char *src)
{
	int i = 0, j, len1 = 0, len2 = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	len1 = i;
	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	len2 = i;
	i = 0;
	j = len2;

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[len2 + len1] = '\0';

	return (dest);
}
