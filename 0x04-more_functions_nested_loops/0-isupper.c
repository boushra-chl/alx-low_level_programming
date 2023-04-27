/**
 * _isupper - function that checks if a character is uppercase
 * @c : the checked character
 * Return: 1 if c is uppercase and 0 if not
 */
#include "main.h"
int _isupper (int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
