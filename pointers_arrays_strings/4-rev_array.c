#include "main.h"
/**
 * reverse_array - reverses an integer array.
 * @a: int array to be reversed
 * @n: size of int array
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int x;
	int i = n - 1;

	for (x = 0; x < i; x++)
	{
		int t = a[x];

		a[x] = a[i];
		a[i] = t;
		i--;
	}
}
