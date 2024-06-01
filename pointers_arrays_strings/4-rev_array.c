#include "main.h"
/**
 * reverse_array - reverses an integer array.
 * @a: int array to be reversed
 * @n: size of int array
 *
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		int t = a[x];
		n--;

		a[x] = a[n];
		a[n] = t;
	}

	return (0);
}
