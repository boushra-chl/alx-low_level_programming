/**
 * _isdigit - function that checks if a character is a digit
 * @c: the checked character
 * Return: 1 if digit and 0 otherwise.
 */
#include "main.h"
	int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	return (1);
	else
	return (0);
}
