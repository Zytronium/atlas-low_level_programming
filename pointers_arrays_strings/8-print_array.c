#include "main.h"
/**
 * print_array - prints @n elements of an array of integers, followed by a new line.
 * @a: array of integers
 * @n: number of integers of the array to be printed
 *
 * Return: doesn't return
 */
void print_array(int *a, int n)
{
	for (int i = 1; i <= n; i++)
	{
		printf("%d", a[n]);
		if (i < n)
			printf(", ");
		else
			_putchar('\n');
		
	}
}
