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

	while (hour <= 12)
	{
		if (hour < 10)
			_putchar('0');
		_putchar('0' + hour);
		_putchar(':');
		hour++;
		while (minute < 60)
		{
			if (minute < 10)
				_putchar('0');
			_putchar('0' + minute);
			_putchar('\n');
			minute++;
		}
		minute = 0;
	}

}
