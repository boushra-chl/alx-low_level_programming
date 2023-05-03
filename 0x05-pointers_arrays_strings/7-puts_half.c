/**
 * * puts_half -  function that prints half of a string, followed by a new line
 * * @str: string to be printed from
 * * Return: void
 * */
#include "main.h"
void puts_half(char *str)
{
	int i = 0, len = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	for (i = len / 2 ; i < len ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

