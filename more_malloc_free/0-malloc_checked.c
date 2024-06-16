#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 *
 * @b: actually, what even is the use of this?.
 *
 * Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *ptrB;

	(void) b;

	ptrB = malloc(sizeof(b));

	if (ptrB == NULL)
		exit(98);
	else
		return (ptrB);
}
