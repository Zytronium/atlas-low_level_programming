#include "main.h"
#include <stdio.h>

/**
 * main - checks the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;
	printf("%f\n", _sqrt_part_two((float) 17, (float) 17/2));
	r = is_prime_number(1);
	printf("%d\n", r);
	r = is_prime_number(1024);
	printf("%d\n", r);
	r = is_prime_number(16);
	printf("%d\n", r);
	r = is_prime_number(17);
	printf("%d\n", r);
	r = is_prime_number(25);
	printf("%d\n", r);
	r = is_prime_number(-1);
	printf("%d\n", r);
	r = is_prime_number(113);
	printf("%d\n", r);
	r = is_prime_number(7919);
	printf("%d\n", r);
	return (0);
}