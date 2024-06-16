#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 *
 * @b: amount of bytes to allocate memory
 *
 * Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *ptrB;

	ptrB = malloc(b);

	if (ptrB == NULL)
		exit(98);

	return (ptrB);
}
