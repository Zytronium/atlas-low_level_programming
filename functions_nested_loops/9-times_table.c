#include "main.h"

/**
 * times_table - prints a times table from 0 to 9
 * Return: what
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
			{
				if (x == 0)
					_putchar(' ');
				_putchar('0' + a);
			}
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
