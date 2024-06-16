#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers, in numeric order from min to max
 *
 * @min: first integer in the array range.
 * @max: last integer in the array range.
 *
 * Return: a new array of integers in numeric order in a range from min to max
*/
int *array_range(int min, int max)
{
	int *array, i, size = max - min;

	if (size < 0)
		return (NULL);

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
