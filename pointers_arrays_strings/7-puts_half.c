#include "main.h"
/**
 * puts_half  - prints the second half of the provided string
 * @str: the provided string
 * Return: doesn't return
 */
void puts_half(char *str)
{
	int i = 0;
	int half;
	int size = 0;

	while (str[size] != '\0')
	{
		size++;
	}
	half = size / 2;

	while (i < size)
	{
		if (i >= half)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
