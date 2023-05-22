/**
 * init_dog - function that initilizes a variable of type dog
 * @struct dog: pointer to struct dog
 * @name: pointer to char
 * @age: float
 * @owner: pointer to char
 * Return: Nothing
 */
#include <stdlib.h>
#include "dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		d = malloc(sizeof(struct dog));
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
