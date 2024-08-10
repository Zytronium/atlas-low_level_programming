#include "search_algos.h"

/**
 * binary_search - searches for the given value in an
 * array of numbers using the Binary search algorithm
 *
 * Assumes the array is sorted from least to greatest
 * and that the given value only appears at most once
 *
 * If you do not print as you search, the min and max
 * variables are not needed, and they can be removed.
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
	size_t i = 0, min = 0, max = size - 1;

	if (array == NULL)
		return (-1); /* indicate failure */

	while (size > 0)
	{
		print_search(array, min, max);

		if (array[i] == value) /* value found */
			return ((int) i); /* return index of value found */

		size /= 2;

		if (array[i] > value)
		{
			i -= size;
			max -= size;
		}
		else
		{
			i += size;
			min += size;
		}
	}

	return (-1); /* indicate value was not found */
}

/**
 * print_search - prints the array as its being searched in the somewhat
 * confusing format that the checker wants it to be printed in.
 * @array: the array being searched
 * @min: the start index of the range we are still searching in
 * @max: the end index of the range we are still searching in
 */
void print_search(const int *array, size_t min, size_t max)
{
	size_t j = min;

	printf("Searching in array: ");

	while (j <= max)
	{
		printf("%d", array[j]);
		if (j < max)
			printf(", ");
		j++;
	}
	putchar('\n');
}
