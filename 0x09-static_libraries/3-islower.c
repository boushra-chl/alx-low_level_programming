#include "main.h"
/**
 * _islower - function that checks for lowercase character
 * @c: The character to be checked
 * Return: 1 if lowercase and 0 if not
 */
	int _islower(int c)
{
	if (c >= 98 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
