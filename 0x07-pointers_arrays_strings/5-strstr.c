/**
 * _strstr - locates a substring
 * @haystack: string that we are looking in
 * @needle: string to be looked for
 * Return: pointer to haystack
 */
#include "main.h"
char *_strstr(char *haystack, char *needle)
{
int i = 0;

	if (*needle == 0)
	return (haystack);

	while (*haystack)
	{
		for (i = 0 ; needle[i] ; i++)
		{
			if (needle[i] == *haystack)
			{
				return (haystack);
			}
		i++;
		}
	haystack++;
	}
return ('\0');
}
