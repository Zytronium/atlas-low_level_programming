#include "main.h"
/**
 * print_to_98 - counts up or down starting from n until 98
 * @n: starting number
 * Return: doesn't return
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printInt(n);
		_putchar(',');
		_putchar(' ');
		if (n < 98)
			n++;
		else if (n > 98)
			n--;
	}
	if (n == 98)
	{
		printInt(98);
		_putchar('\n');
	}
}
/**
 * printInt - prints an integer up to 3 digits
 * @n: number to print
 */
void printInt(int n)
{
	int isNegative;

	if (n < 0)
	{
		isNegative = 1;
		_putchar('-');
	}
	else
		isNegative = 0;

	if (isNegative == 1)
		n *= -1;
	if (countDigits(n) == 1)
		_putchar('0' + n);
	else if (countDigits(n) == 2)
	{
		_putchar('0' + n / 10);
		_putchar('0' + (n % 10));
	}
	else if (countDigits(n) == 3)
	{
		int ones = n % 10;
		int tens = (n / 10) % 10;
		int hundreds = (n / 100) % 100;

		_putchar('0' + hundreds);
		_putchar('0' + tens);
		_putchar('0' + ones);
	}
	if (isNegative == 1)
		n *= -1;
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
