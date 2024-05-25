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
		_putst(reversed, s);
	}
	while (n > 0)
	{
		n--;
		s[n] = reversed[n];
		_putst(reversed, s);
	}
	_putst(reversed, s);
}
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @rev: debug thing
 * @st: debug thing 2
 * Return: 0
 */
void _putst(char *rev, char *st)
{
	int i = 0;
	char string[] = "reversed: ";
	char string2[] = "\ns: ";

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	i = 0;
	while (rev[i] != '\0')
	{
		_putchar(rev[i]);
		i++;
	}
	i = 0;
	while (string2[i] != '\0')
	{
		_putchar(string2[i]);
		i++;
	}
	i = 0;
	while (st[i] != '\0')
	{
		_putchar(st[i]);
		i++;
	}
	_putchar('\n');
}
