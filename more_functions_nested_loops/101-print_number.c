#include "main.h"
/**
 * print_number - prints an integer onecharacter at a time,
 * with (almost) NO LIMIT to how digits it can print.
 * @n: number to print
 * Return: doesn't return
 */
void print_number(int n)
{
	int digit;
	int i;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	for (i = countDigits(n) - 1; i >= 0; i--)
	{
		int d = xPowY(10, i);
		digit = (n / d) % 10;
		_putchar('0' + digit);
	}
}
/**
 * countDigits - returns a number's number of digits
 * @x: the number to count the digits of
 * Return: number of digits in x
 */
int countDigits(int x)
{
	if (x < 0)
	{
		if(x > -10) return (1);
	}
	else if (x < 10) return (1);

	return (1 + countDigits(x /10));
}
/**
 * xPowY - exponent
 * @x: x
 * @y: y
 * Return: x to the power of y
 */
int xPowY(int x, int y)
{
	int i;
	int output = 1;

	for (i = 0; i < y; ++i)
		output *= x;

	return(output);
}
