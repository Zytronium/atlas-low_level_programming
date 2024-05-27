#include "main.h"
#include <stdio.h>
/**
 * print_array - prints @n elements of an array of integers, followed by a new line.
 * @a: array of integers
 * @n: number of integers of the array to be printed
 *
 * Return: doesn't return
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		else
			_putchar('\n');
	}
}
