#include "main.h"
/**
 * _strcpy - copies src and sets dest's value to that value
 * @dest: destination string to be copied to
 * @src: source string to be copied from
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = src[n];/*accounting for '\0' character*/
	return (dest);
}
