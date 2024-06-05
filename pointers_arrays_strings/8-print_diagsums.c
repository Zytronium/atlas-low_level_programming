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
	int sumN = 0;
	int sumM = 0;

	for (int i = 0; i < size; i++)
	{
		sumN += a[i * size + i];
		sumM += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sumN, sumM);
}
