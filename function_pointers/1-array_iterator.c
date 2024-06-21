#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each element of an array.
 *
 * @array: array of things to execute a function on
 * @size: size of the array
 * @action: function to execute on each element of the array
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
