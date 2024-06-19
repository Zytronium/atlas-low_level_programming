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

	new_name = malloc(strlen(name) + 1);
	new_owner = malloc(strlen(owner) + 1);

	if (new_name == NULL || new_owner == NULL)
		return (NULL);

	init_dog(my_dog, strcpy(new_name, name), age, strcpy(new_owner, owner));

	free(new_name);
	free(new_owner);

	return (my_dog);
}
