#include "search_algos.h"

/**
 * linear_search - searches for the given value in an
 * array of numbers using the Linear search algorithm
 *
 * @array: the array to search in
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the index of the first element matching the given value,
 * or -1 if the array is NULL or the value is not found.
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1); /* indicate failure */

	while (i <= size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			printf("Found %d at index: %d\n", value, i);
			return (i); /* return index of value found */
		}
		i++;
	}

	printf("Could not find value %d\n", value);
	return (-1); /* indicate value was not found */
}
