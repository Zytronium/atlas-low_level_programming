#include "main.h"

/**
 * prime_helper - helper function for recursively checking if a number is prime
 * @n: number to check if its prime
 * @guess: number to check if its a multiple of n
 * Return: 1 if prime, 0 if not.
 */
int prime_helper(int n, int guess)
{
	if (!(n % guess))
		return (0);
	if (guess > n / 2)
		return (1);
	return (prime_helper(n, guess + 1));
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
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (prime_helper(n, 2));
}
