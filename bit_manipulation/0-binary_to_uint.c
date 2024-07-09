#include "main.h"
#include <math.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: string of chars assumed to be 0's and 1's
 *
 * Return: the converted number, or NULL if
 * b is NULL or a char is not a 1 or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, size = 0;
	int i;
	char bit;

	if (b == NULL)
		return (0);

	while (b[size] != '\0')
		size++;

	for (i = (int) size - 1; i >= 0; --i)
	{
		if (b[i] == '0')
			bit = 0;
		else if (b[i] == '1')
			bit = 1;
		else
			return (0);

		result += bit * xPowY(2, ((i - (int) size) * - 1) - 1);
	}
	return (result);
}

/**
 * xPowY - exponent of to the power of y
 *
 * @x: x
 * @y: y
 *
 * Return: x to the power of y
 */
int xPowY(int x, int y)
{
	int i, output = 1;

	for (i = 0; i < y; i++)
		output *= x;

	return (output);
}
