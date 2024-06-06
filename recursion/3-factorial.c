#include "main.h"
/**
 * factorial - calculates the factorial of @n using only recursion.
 * @n: number to calculate factorial of
 *
 * Return: @n! (factorial of @n)
 */
int factorial(int n)
{
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else
		if (n < 0)
			return (-1);
		else
			return (1);
}
