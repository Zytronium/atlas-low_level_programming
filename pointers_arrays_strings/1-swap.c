#include "main.h"
/**
 * swap_int - swaps the values of 2 numbers, a and b.
 * @a: number given that will swap with @b
 * @b number given that will swap with @a
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
