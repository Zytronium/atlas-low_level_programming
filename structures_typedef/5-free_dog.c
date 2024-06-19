#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - it's like Free Bird but with a dog instead of a bird. Duh
 *
 * @d: dog to be set free
 *
 * Return: Nothing. In fact, less than nothing. It DELETES A DOG!
 * #FREE_DOG_DOES_NOT_FREE_DOGS_THE_WAY_YOU_THINK_IT_DOES
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
