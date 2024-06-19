#ifndef DOG_H
#define DOG_H

/**
 * struct dog - info for a dog
 *
 * @name: dog's name (string)
 * @age: dog's age (number)
 * @owner: dog's owner's name (string)
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
