#include <stdio.h>
#include "main.h"

void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
	}
	else
	{
		putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
