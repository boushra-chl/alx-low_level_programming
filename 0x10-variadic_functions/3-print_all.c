/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * 
 * Return: Nothing
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
void print_all(const char * const format, ...)
{
	va_list args;
	char *sep = "";
	int i = 0;
	char *str;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch(format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;

				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;

				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;

				case 's': ;
					str = va_arg(args, char *);
					if (str == NULL)
						str ="(nil)";
					printf("%s%s", sep, str);
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
	va_end(args);
}


