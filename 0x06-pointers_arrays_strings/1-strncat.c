/**
 * _strncat -  function that concatenates two strings
 * respecting number of bytes
 * @dest: string to be concatenated into
 * @src: string to be concatenated
 * @n: number of bytes to be printed
 * Return: pointer to dest
 */
#include "main.h"
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len2 = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	len2 = i;
	j = len2;
	i = 0;
		while (src[i] != '\0' && i < n)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
	return (dest);
}
