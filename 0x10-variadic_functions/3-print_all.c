#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints all arguments
 * @format: list of types of arguments
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *p, *sep = "";

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			switch(format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ap, double));
					break;
				case 's':
					p = va_arg(ap, char *);
					if (p == NULL)
						p = "(nil)";
					printf("%s%s", sep, p);
					break;
				default:
					i++;
					continue;
			}
		sep = ", ";
		i++;
		}
	}
	printf("\n");
	va_end(ap);
}
