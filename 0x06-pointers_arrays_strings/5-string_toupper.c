/**
 * string_toupper - function that changes all lowercase
 * letters of a string to uppercase
 * @str: pointer to char
 * Return: pointer to char
 */
#include "main.h"
char *string_toupper(char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		if (src[i] <= 122 && src[i] >= 97)
		{
			src[i] = src[i] - 32;
		}
		i++;
	}
	return (src);
}

