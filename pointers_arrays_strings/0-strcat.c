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

	while (dest[i] != '\0')
		{
			i++;
		}
	while (n <= i + 1)
		{
			dest[i + n] = src[n];
			n++;
		}

	return (dest);
}
