/**
 * print_numbers -  function that prints numbers, followed by a new line
 * @separator: pointer to char, string to be printed between numbers
 * @n: unsigned int, number of integers passed to the function
 *
 * Return: Nothing
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
