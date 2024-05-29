#include "main.h"
/**
 * m_strcat - adds src to dest
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	while (src[i] != '\0')
		{
			i++;
		}
		i += 1;
		while (n <= i + 1)
		{
			dest[i + 1 + n] = src[n];
			n++;
		}

	return (dest);
}
