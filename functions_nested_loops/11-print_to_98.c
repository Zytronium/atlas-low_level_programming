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
		if (n < 0)
			_putchar('-');
		if (n >= 10)
		{
			_putchar('0' + ((n - (n % 10)) / 10));
			_putchar('0' + (n % 10));
		}
		else if (n <= -10)
		{
			n *= -1;
			_putchar('0' + ((n - (n % 10)) / 10));
			_putchar('0' + (n % 10));
			n *= -1;
		}
		else if (n > -10 && n < 0)
			_putchar('0' - n);
		else
		{
			_putchar('0' + n);
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (n < 98)
			n++;
		else if (n > 98)
			n--;
	}
	if (n == 98)
	{
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
}
