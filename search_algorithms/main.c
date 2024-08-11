#include "search_algos.h"
#include <stdlib.h>

void search(int *array, size_t size, int value);

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int array2[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 25, 48 };
	size_t size = sizeof(array) / sizeof(array[0]);

	search(array, size, 2);

	search(array, 5, 5);

	search(array, size, 5);

	search(array, size, -1);

	search(array, size, 10);

	size = sizeof(array2) / sizeof(array2[0]);

	search(array2, size, 12);

	return (EXIT_SUCCESS);
}

void search(int *array, size_t size, int value)
{
	int idx;

	idx = binary_search(array, size, value);
	if (idx != -1)
		printf("Found %d at index: %d\n\n", value, idx);
	else
		printf("Could not find value %d\n\n", value);
}
