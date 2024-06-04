#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - descr.
 * @a: matrix/array provided
 * @size: size of the array @a
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int m;
	int n;
	int i = 0;

	while (i < size)
	{
		m += a[i * size + i];
		n += a[i * size + (size - (i + 1))];
		i++;
	}

	printf("%d, %d\n", m, n);
}
