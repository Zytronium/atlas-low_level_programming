#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * with @nmemb elements of a type that's @size bytes
 *
 * @nmemb: number of members of the array.
 * @size: number of bytes for each member of array.
 * basically sizeof(type of members in array)
 *
 * Return: pointer to first member of the newly allocated array
 * or null if fails or nmemb or size is 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i = 0;
	char *ptrArr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);

	ptrArr = array;

	while (i < size * nmemb)
	{
		ptrArr[i] = 0;
		i++;
	}

	return (array);
}
