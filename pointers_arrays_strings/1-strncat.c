#include "main.h"
/**
 * _strnncat - adds src to dest
 * @dest: string that is getting @src added to it
 * @src: string that is added to @dest
 * @n: max bytes of src that will be added to dest
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (x <= i + 1 && x < n)
	{
		dest[i + x] = src[x];
		x++;
	}

	return (dest);
}
