#include "main.h"

/**
 * jack_bauer - clock clock clock clock tick tock
 *
 * Return: the last digit of n
 */
void jack_bauer(void)
{
	int hour;
	int minute;
	hour = 0;
	minute = 0;
	while (hour <= 23)
	{
		if (hour < 10)
			_putchar('0');
		else if (hour < 20)
			_putchar('1');
		else
			_putchar('2');
		_putchar('0' + (hour % 10));
		_putchar(':');
		if (minute < 10)
		{
			_putchar('0');
			_putchar('0' + minute);
		}
		else
		{
			_putchar('0' + ((minute - (minute % 10)) / 10));
			_putchar('0' + (minute % 10));
		}
		_putchar('\n');
		if (minute < 59)
			minute++;
		else
		{
			minute = 0;
			hour++;
		}
	}

}
