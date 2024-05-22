#include "main.h"
/**
 * more_numbers - prints 0 - 14 followed by a new line, 10 times
 *
 * Return: 0
 */
void more_numbers(void)
{
	int n = 0;
	int repeats = 0;

	while (repeats <= 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10);
				_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		_putchar('\n');
		repeats++;
	}
}
