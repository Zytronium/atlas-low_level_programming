#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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
	int i;

	new_name = malloc(sizeof(name) + 1);
	if (new_name == NULL)
		return (NULL);

	new_owner = malloc(sizeof(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		return (NULL);
	}

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		free(new_name);
		free(new_owner);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
		new_name[i] = name[i];

	for (i = 0; owner[i]; i++)
		new_owner[i] = owner[i];

	my_dog->name = new_name;
	my_dog->age = age;
	my_dog->owner = new_owner;

	return (my_dog);
}
