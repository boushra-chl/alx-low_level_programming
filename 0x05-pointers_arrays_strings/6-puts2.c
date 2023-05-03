/**
 * puts2 - function that prints every other character
 * of a string, starting with the first character, followed by a new line
 * @str: character to be printed
 */
#include "main.h"
void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	for (i = 0 ; i < len ; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
