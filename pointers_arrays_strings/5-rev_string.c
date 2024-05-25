#include "main.h"
/**
 * rev_string - reverses a string's value ("hello world!" >> "!dlrow olleh")
 * @s: string/text to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	int size = 0;
	int n = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	while (n <= size / 2)
	{
		char a = s[n];

		s[size] = s[n];
		s[n] = a;
		n++;
		size--;
		_putst(reversed, s);
	}
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
