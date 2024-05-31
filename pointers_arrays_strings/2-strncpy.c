#include "main.h"
/**
 * _strncpy - adds src to dest
 * @dest: string that is getting @src added to it
 * @src: string that is added to @dest
 * @n: max bytes of src that will be added to dest
 * Return: dest
 */
 char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\0' && i <= n)
	{
        dest[i] = src[i]
		i++;
	}

	return (dest);
}
