#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that calculates the length
 * of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * check_palindrome - checks if a string is paliandrome
 * @s: string ro check
 * @l: length
 *
 * Return: 0 or 1
 */
int check_palindrome(char *s, int l)
{
	if (l < 1)
		return (1);
	if (*s != *(s + l))
		return (0);
	return (check_palindrome(s + 1, l - 2));
}
/**
 * is_palindrome - function that returns 1 if the string
 * is palindrome and 0 if not
 * @s: string to check
 *
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (check_palindrome(s, len - 1));
}
