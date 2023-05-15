/**
 * create_array - function that creates an array of chars 
 * and initializes it with a specific char
 * @size: size of array
 * @c: char
 * Return: pointer to char
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
	char* s;
	unsigned int i;
	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * size);

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		s[i] = c;
	}
	return (s);
}	 
