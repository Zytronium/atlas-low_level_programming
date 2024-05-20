#include "main.h"

/**
 * print_last_digit - prints a number's last digit
 * @n: input number
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return (n % 10);
}
