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
	int i, j, name_len = 0, owner_len = 0;

	for (i = 0; name[i]; i++)
		name_len++;
	for (j = 0; owner[j]; j++)
		owner_len++;

	my_dog = malloc(name_len + owner_len + sizeof(float) + 7);
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(name_len + 7);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc(owner_len - 1);
	if (my_dog->owner == NULL) {
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		my_dog->name[i] = name[i];
	my_dog->name[i] = '\0';

	my_dog->age = age;

	for (j = 0; j <= owner_len; j++)
		my_dog->owner[j] = owner[j];
	my_dog->owner[j] = '\0';

	return (my_dog);
}
