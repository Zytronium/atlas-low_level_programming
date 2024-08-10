#include "search_algos.h"

/**
 * binary_search - searches for the given value in an
 * array of numbers using the Binary search algorithm
 *
 * Assumes the array is sorted from least to greatest
 * and that the given value only appears at most once
 *
 * @array: the array to search in
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the index of the first element found matching the given
 * value, or -1 if the array is NULL or the value is not found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1); /* indicate failure */

	while (size > 0)
	{
		print_search(array, i, size);

		if (array[i] == value) /* value found */
			return ((int) i); /* return index of value found */

		size /= 2;

		if (array[i] > value)
			i -= size;
		else
			i += size;
	}

	return (-1); /* indicate value was not found */
}

void print_search(const int *array, size_t i, size_t size)
{
	int j = 0;
	printf("Searching in array: ");

	while (j++)
	{

	}
	putchar('\n');
}
