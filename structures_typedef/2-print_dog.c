#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the values of each property/element of the provided dog
 *
 * @d: dog to print
 *
 * Return: Why would you ever return a dog? :( nothing )
 */
void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
	}
}
