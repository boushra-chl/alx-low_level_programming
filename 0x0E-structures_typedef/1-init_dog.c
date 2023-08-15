#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initializes a variable of type
 * struct dog
 * @d: variable of type struct dog
 * @name: name to initialize with
 * @age: age to initialize with
 * @owner: name of owner to initialize with
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
