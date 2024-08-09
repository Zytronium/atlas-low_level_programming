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
	int array[] = { 42, 3, 4, 42, 6, 7, -1, 5 };
	size_t size = sizeof(array) / sizeof(array[0]);

	search(array, size, 3);

	search(array, size, 42);

	search(array, size, 999);

	search(array, size, -1);

	search(array, size, 10);

	return (EXIT_SUCCESS);
}

void search(int *array, size_t size, int value)
{
	int idx;

	idx = linear_search(array, size, value);
	if (idx != -1)
		printf("Found %d at index: %d\n\n", value, idx);
	else
		printf("Could not find value %d\n\n", value);
}
