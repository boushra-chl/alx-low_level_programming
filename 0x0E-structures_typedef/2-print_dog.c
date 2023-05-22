/**
 * print_dog - function that prints a struct dog
 * @d: pointer to struct dog
 * Return: Nothing
 */
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->age == 0)
		d->age = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
       	
