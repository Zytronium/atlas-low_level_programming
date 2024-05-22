#include "main.h"
/**
 * print_most_numbers - prints all numbers 0 - 9 except 2 and 4.
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int i = 0;
	
	while (i <= 9)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);
	}
	_putchar('\n');
}
