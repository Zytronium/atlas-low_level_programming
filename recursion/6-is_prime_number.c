#include "main.h"


int prime_helper(int n, int guess)
{
	if (!(guess % n))
		return (1);
	if (_sqrt_recursion(n) != -1 && _sqrt_recursion(n) > guess)
		return (prime_helper(n, guess + 1));
	return (0);
}

/**
 * is_prime_number - determines if a given number is a prime number or not
 *
 * @n: given integer to find out if it's a prime number or not
 *
 * Return: 1 (true) if @n is a prime number; 0 (false) if not
 */
int is_prime_number(int n)
{
	if (n <= 1 || (!(n % 2) && n != 2))
		return (0);
	return (prime_helper(n, 2));
}
