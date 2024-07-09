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

	for (i = 1; n ^ m; i++)
	{
		(count += ((unsigned long int0 (n ^ m) >>= (unsigned long int) i) & 1);
	}
	return (count);
}
