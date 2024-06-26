#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of all the numbers in a diagonal line
 * from each corners of a square 2D integer array. There should be 2 diagonals
 * forming an X pattern if you draw a line over each diagonal on a visual
 * representation of the square matrix.
 *
 * @a: matrix/array provided
 * @size: size of the array @a
 * Return: doesn't return
 */

void print_diagsums(int *a, int size)
{
	int sumN = 0;
	int sumM = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sumN += a[i * size + i];
		sumM += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sumN, sumM);
}
