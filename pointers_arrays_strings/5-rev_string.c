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
	int size = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	size = i;
	while (n <= size / 2)
	{
		char a = s[n];

		s[i] = s[n];
		s[n] = a;
		n++;
		i--;
		}
	}
}
