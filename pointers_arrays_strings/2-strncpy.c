#include "main.h"
/**
 * _strncpy - copeis src to dest
 * @dest: string that is getting @src copied to it
 * @src: string that is copied to @dest
 * @n: max bytes of src that will be copied to dest
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

    if (!n || src[0] == '\0')
    {
        dest[0] = '\0';
    }

	while (src[i + 1] != '\0' && i < n)
	{
        dest[i] = src[i];
		i++;
	}

	return (dest);
}
