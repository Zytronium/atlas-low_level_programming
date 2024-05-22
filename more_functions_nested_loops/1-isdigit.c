#include "main.h"
/**
 * _isdigit - checks for digits 0 - 9
 * @c: ASCII code for provided character
 *
 * Return: 1 (true) if c's ASCII code translate to a character that is a number (0-9), otherwise returns 0 (false)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
