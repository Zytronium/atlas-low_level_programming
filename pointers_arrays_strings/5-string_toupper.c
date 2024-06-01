#include "main.h"
/**
 * string_toupper - makes the string UPPERCASE.
 * @s: string I guess. It actually didn't give a name to use for this...
 * Return: 0
 */
char *string_toupper(char *srn)
{
	int i;

	for (i = 0; srn[i]; i++)
	{
		if (srn[i] >= 'a' && srn[i] <= 'z')
		{
			srn[i] -= 32
		}
	}

	return (*srn);
}
