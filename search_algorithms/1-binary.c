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
	size_t i = 0, range = size - 1, min = 0, max = range;

	if (array == NULL || size == 0)
		return (-1); /* indicate failure */

	while (range > 0 && i < size && i >= min && i <= max)
	{

		if (array[i] == value) /* value found */
		{
			/*debug_print(min, max, i);*/
			print_search(array, min, max);
			return ((int) i); /* return index of value found */
		}

		if (array[i] > value)
		{
			if (max != i)
			{
				/*debug_print(min, max, i);*/
				print_search(array, min, max);
				max = i - 1;
			}
			if (range == 1)
				i--;
			else
				i -= range / 2;
		}
		else
		{
			if (min != i)
			{
				/*debug_print(min, max, i);*/
				print_search(array, min, max);
				min = i + 1;
			}
			if (range == 1)
				i++;
			else
				i += range / 2;
		}
		range = max - min;
	}
	/*debug_print(min, max, i);*/
	if (array[i] == value && i >= min && i <= max) /* value found */
	{
		print_search(array, min, max);
		return ((int) i); /* return index of value found */
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

/**
 * debug_print - print debug stuff
 *
 * @min: value of min to print
 * @max: value of max to print
 * @i: value of i to print
 */
/*void debug_print(size_t min, size_t max, size_t i)
{
	printf("min: %d\tmax: %d\ti: %d\n", (int) min, (int) max, (int) i);
}*/
