#include "main.h"
/**
 * _strncpy - copies src to dest
 * @dest: string that is getting @src copied to it
 * @src: string that is copied to @dest
 * @n: max bytes of src that will be copied to dest
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
        dest[i] = src[i];
		i++;
	}

	if (i <= n)
	{
		dest[i] = '\0';
	}

	return (dest);
}
