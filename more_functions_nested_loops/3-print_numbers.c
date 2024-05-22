#include "main.h"
/**
 * print_numbers - prints 0 - 9 and a new line
 *
 * Return: 0
 */
void print_numbers(void)
{
	int i = 0;

	while (i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
