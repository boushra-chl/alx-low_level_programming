#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings followed by new line
 * @separator: string to print between arguments
 * @n: number of arguments
 *
 * Reurn: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *p;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(ap, char *);

		if (p == NULL)
			p = "(nil)";
		if (separator == NULL)
		{
			printf("%s", p);
		}
		else if (separator && i == 0)
		{
			printf("%s", p);
		}
		else
		{
			printf("%s%s", separator, p);
		}
	}
	va_end(ap);
	printf("\n");
}
