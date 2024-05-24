#include "main.h"
/**
 * rev_string - reverses a string's value ("hello world!" >> "!dlrow olleh")
 * @s: string/text to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	int i = 0;
	int n = 0;
	char *reversed = s;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		reversed[i] = s[n];
		n++;
		_puts("reversed: \"$reversed\"\ns: \"$s\"\n");
	}
	while (n > 0)
	{
		n--;
		s[n] = reversed[n];
		_puts("reversed: \"$reversed\"\ns: \"$s\"\n");
	}
	_puts("reversed: \"$reversed\"\ns: \"$s\"\n");
}
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string/text to be printed.
 * Return: 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
