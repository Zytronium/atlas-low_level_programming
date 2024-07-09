#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another.
 *
 * @n: first numb
 * @m: second numb
 * Return: numb of bits needed to flip to get one numb from the other
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, i;

	for (i = 0; n ^ m; i++)
	{
		(count += ((n ^ m) >> (unsigned int) i) & 1);
	}
	return (count);
}
