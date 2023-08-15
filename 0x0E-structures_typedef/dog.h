#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the dog owner
 *
 * Description: dog structure
 */
struct dog
{
	char *name;
        float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _strlen(const char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

#endif
