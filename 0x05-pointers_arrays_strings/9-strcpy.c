/**
 * _strcpy(char *dest, char *src) -  function that copies the string
 * pointed to by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * Return: pointer to dest
 */
#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int i = 0, len1 = 0, len2 = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	len2 = i;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	len1 = i;

	if (len1 < len2)
	{
		for (i = 0 ; i < len2 ; i++)
			dest[i] = src[i];
	}
	else
	{
			for (i = 0 ; i < len2 ; i++)
				dest[i] =src[i];
	}
	return(dest);
}

