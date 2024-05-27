#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to be used
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;
	int n = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (n < i)
	{
		if (!(n % 2))
			_putchar(str[n]);
		n++;
	}
}
