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
 * not return 0. Returns -1 if no element matches,
 * or if size is less than or equal to zero.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
