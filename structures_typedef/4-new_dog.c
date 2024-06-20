#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 *
 * @name: name of new dog
 * @age: age of new dog
 * @owner: new dog's owner's name
 *
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *new_name, *new_owner;

	new_name = malloc(sizeof(name) + 1);
	new_owner = malloc(sizeof(owner) + 1);
	my_dog = malloc(sizeof(dog_t));

	if (new_name == NULL || new_owner == NULL || my_dog == NULL)
		return (NULL);

	new_name = strcpy(new_name, name);
	new_owner = strcpy(new_owner, owner);

	my_dog->name = new_name;
	my_dog->age = age;
	my_dog->owner = new_owner;

	return (my_dog);
}
