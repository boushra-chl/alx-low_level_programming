/**
 * leet - function that encodes a string into 1337
 * @str: string to be encoded
 * Return: pointer to str
 */
#include "main.h"
char *leet(char *str)
{
int i = 0, j = 0;
char c[] = {'a', 'e', 'o', 't', 'l'};
char r[] = {'4', '3', '0', '7', '1'};

	while (str[i] != '\0')
	{
		while (j != 5)
		{		
			if (str[i] == c[j])
				str[i] = r[j];
		}	
		j++;
	i++;
	}
return (str);
}
