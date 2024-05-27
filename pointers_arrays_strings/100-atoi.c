#include "main.h"
/**
 * _atoi - descr.
 * @s:
 * Return: i
 */
int _atoi(char *s)
{
	int i = 0;
	int neg = 1;
	int size;

	for (size = 0; s[size] != '\0'; size++)
	{
		if (s[size] == '-')
			neg *= -1;
		else if (s[size] >= 48 && s[size] <= 57)
		{
			i *= 10;
			i += s[size] - 48;
		}

	}
	i *= neg;

	return (i);
}
