#include "main.h"
/**
 * _sqrt_recursion - gets the natural square root of a number @n.
 *
 * @n: input number to get the natural square root of
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return _sqrt_part_two(n, n / 2);
}

/**
 *
 */
int _sqrt_part_two(int n, int m)
{
	switch (m * m)
	{
	case n:
		return (m);
		break;

	case (< n):
		return _sqrt_part_two(n, m - 1);
		break;

	case (> n):
		return (-1);
	}
}