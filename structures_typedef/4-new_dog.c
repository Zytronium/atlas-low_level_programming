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
	int i, name_len = 0, owner_len = 0;

	for (i = 0; name[i]; i++)
		name_len++;
	for (i = 0; owner[i]; i++)
		owner_len++;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(name_len + 1);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc(owner_len + 1);
	if (my_dog->owner == NULL) {
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		my_dog->name[i] = name[i];
	my_dog->name[i] = '\0';

	my_dog->age = age;

	for (i = 0; i <= owner_len; i++)
		my_dog->owner[i] = owner[i];
	my_dog->owner[i] = '\0';

	return (my_dog);
}
