/**
 * print_name - function that prints a name
 * @name: pointer to char
 * @f: pointer to the function void f(char *)
 * Return: Nothing
 */
#include <stdio.h>
#include <stdlib.h>
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
