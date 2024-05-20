#include "main.h"

/**
 * print_last_digit - prints a number's last digit
 * @n: input number
 * Return: the last digit of n
 */
void times_table(void)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y <= 9)
	{
		while (x <= 9)
		{
			int a = x * y;
			if (a >= 10)
			{
				_putchar('0' + ((a - (a % 10)) / 10));
				_putchar('0' + (a % 10));
			}
			else
				_putchar(' ');
				_putchar('0' + a);
			if (x < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			x++;
		}
		_putchar('\n');
		x = 0;
		y++;
	}
}
