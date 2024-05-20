#include "main.h"

/**
 * print_alphabet - entry point I think
 * Description: checks for lowercase character
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (0);
	}
}
