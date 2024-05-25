#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to be used
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;

	while (i < _strlen(str))
	{
		if (!(i % 2))
			_putchar(str[i]);
		i++;
	}
	return (0);
}
