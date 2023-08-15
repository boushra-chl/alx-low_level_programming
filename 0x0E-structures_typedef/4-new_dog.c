#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that gets a length of a string
 *
 * @str: the string to get the length
 *
 * Return: lenght of @str
 */

int _strlen(const char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcpy - a function that returns @dest with a copy of @src
 *
 * @src: string to copy
 * @dest: copy string here
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog -a function that creates a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: struct pointer dog pr NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(gog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner,owner);
	return (dog);
}
	

