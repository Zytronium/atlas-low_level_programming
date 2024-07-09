#include "main.h"
#include <stdlib.h>

/**
 * get_bit - gets the value of a bit at a given index
 * 
 * @n: number to find a bit in
 * @index: the index of the bits of n
 *
 * Return: the bit at index of index in n or -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index & sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1)
}
