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
	int i, name_len = 0, owner_len = 0;

	for (i = 0; name[i]; i++)
		name_len++;
	for (i = 0; owner[i]; i++)
		owner_len++;

	new_name = malloc(name_len + 1);
	if (new_name == NULL)
		return (NULL);

	new_owner = malloc(owner_len + 1);
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

	for (i = 0; i <= name_len; i++)
		new_name[i] = name[i];
	new_name[i] = '\0';

	for (i = 0; i <= owner_len; i++)
		new_owner[i] = owner[i];
	new_owner[i] = '\0';

	my_dog->name = malloc(name_len + 1);
	my_dog->owner = malloc(owner_len + 1);

	my_dog->name = new_name;
	my_dog->age = age;
	my_dog->owner = new_owner;

	return (my_dog);
}
