#include "main.h"
/**
 * _sqrt_recursion - gets the natural square root of a number @n.
 *
 * @n: input number to get the natural square root of
 * Return: natural square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (_sqrt_part_two(n, n / 2));
}

/**
 * _sqrt_part_two - second function to find the square root of a number
 * @n: number to find sqrt of
 * @m: helper parameter to guess and check.
 * Return: the natural square root of a number
 * If it is a decimal, the number will not be found, so it returns -1
 */
int _sqrt_part_two(int n, int m)
{
	if (m * m == n)
		return (m);
	if (m * m > n)
		return (_sqrt_part_two(n, m - 1));
	else
		return (-1);
}
