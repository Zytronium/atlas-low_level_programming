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
		}
	}
