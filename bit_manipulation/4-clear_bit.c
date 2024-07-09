#include "main.h"
/**
 * clear_bit - sets the value of a bit in n to 0 at a index of index.
 *
 * @n: pointer to the number to manipulate
 * @index: index of the bit in n to manipulate
 *
 * Return: 1 on sucess; or -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n |= 1UL << index;

	return (1);
}
