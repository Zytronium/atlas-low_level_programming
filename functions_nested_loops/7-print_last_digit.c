#include "main.h"

/**
 * print_last_digit - prints a number's last digit
 * @n: input number
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (i < 0)
		i = -i;

	_putchar('0' + i);
	return (i);
}
