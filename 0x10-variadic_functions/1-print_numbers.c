#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: pointer to string constant
 * @n: number of arguments
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(ap, int));
		}
		else if (separator && i == 0)
		{
			printf("%d", va_arg(ap, int));
		}
		else
			printf("%s%d", separator, va_arg(ap, int));
	}

	va_end(ap);
	printf ("\n");
}
