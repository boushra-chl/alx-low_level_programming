/**
 * _atoi - function that converts a string to an integer
 * @s: string to be converted
 * Return: integer
 */
#include "main.h"
int _atoi(char *s)
{
	int i = 0, len = 0, sign = 1;
	int n = 0;

	while ( s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (i = 0 ; i < len ; i++)
	{
		if (s[i] <= 57 && s[i] >= 48)
		{
			n = n * 10 + s[i] - '0';
			if (s[i+1] < 48 || s[i+1] > 57)
				break;
		}
		else if (s[i] == 45)
		{
			sign = -1;
		}
	}
		n = n * sign;
		return (n);
}

