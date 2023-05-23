/**
 * main - function that prints the name of the file 
 * the program is compiled from
 * Return: 0 (SUccess)
 */
#include <stdio.h>
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}

