#include "main.h"

/**
 * set_bit - sets a bit in n at index of index.
 *
 * @n: pointer to number to perform bit manipulation on
 * @index: index of bit to manipulate
 *
 * Return: 1 on sucess; or -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n |= 1UL << index;
	return (1);
}
