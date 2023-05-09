/**
 * _strpbrk - locates the first occurence in s of any 
 * of the bytes in string accept or NULL if no such byte is found
 * @s: string that we are looking in
 * @accept: string to be looked for
 * Return: pointer to character
 */
#include "main.h"
char *_strpbrk(char *s, char *accept)
{
int i = 0, j = 0;

	while (*s)
	{
		for (i = 0 ; accept[i] ; i++)
		{
			if (accept[i] == *(s+j))
			{
				return (s);
			}
		i++;
		}
	i++;
	}
return ('\0');
}
