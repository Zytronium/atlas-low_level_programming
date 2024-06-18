#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initiates the dog
 *
 * @dog: dog struct
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(name) + sizeof(float) + sizeof(owner));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
