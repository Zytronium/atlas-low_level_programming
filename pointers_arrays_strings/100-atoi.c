#include "main.h"
/**
 * _atoi - returns the integer version of a string I guess
 * @s: string
 * Return: i
 */
int _atoi(char *s)
{
	int i = 0;
	int numberStarted = 0;
	int numberEnded = 0;
	int neg = 1;
	int size;

	for (size = 0; s[size] != '\0'; size++)
	{
		if (!numberEnded)
		{
			if (s[size] == '-' && !numberStarted)
				neg *= -1;
			else if (s[size] >= 48 && s[size] <= 57 && !numberEnded)
			{
				if (!numberStarted)
					numberStarted = 1;
				i *= 10;
				if (neg == -1)
				{
					i *= -1;
					i -= s[size] - 48;
					neg = 0;
				}
				else if (!neg)
					i -= s[size] - 48;
				else
					i += s[size] - 48;
			}
			if (numberStarted && !numberEnded && (s[size] < 48 || s[size] > 57))
					numberEnded = 1;
		}
	}
	if (!neg)
		neg = 1;
	i *= neg;

	return (i);
}
