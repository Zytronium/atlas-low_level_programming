#include "main.h"

/**
 * Description: checks for lowercase character
 * c: ASCII code for provided character
 * _islower: entry point I guess
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
