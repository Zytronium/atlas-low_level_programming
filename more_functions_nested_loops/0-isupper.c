#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: ASCII code for provided character
 *
 * Return: 1 if uppercase, 0 if lowercase or if its not a letter
 */
int _isupper(int c)
{
	if (c >= 41 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
