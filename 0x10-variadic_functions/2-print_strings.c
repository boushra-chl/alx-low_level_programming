/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n:  number of strings passed to the function
 *
 * Return: Nothing
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *p;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
		{
			printf("%s", separator);
		}
		p = va_arg(args, char *);
		printf("%s", (p == NULL) ? "(nil)" : p);
	}
	printf("\n");
	va_end(args);
}
	
