#include "main.h"

/**
 * print_last_digit - prints a number's last digit
 * @n: input number
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	long int i;

	i = n;
	if (n < 0)
		i = n * -1;

	_putchar((i % 10) + '0');
	return (i % 10);
}
