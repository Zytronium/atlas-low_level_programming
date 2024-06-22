#include "function_pointers.h"

/**
 * int_index - searches for an integer, assuming the
 * cmp function works the way it is assumed to.
 *
 * @array: pointer to an array of integers
 * @size: size of array
 * @cmp: pointer to function that compares values
 *
 * Return: Index of the first element that cmp does
 * not return 0. Returns -1 if there are no matches,
 * if size is 0 or less, or if array or cmp are NULL.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
