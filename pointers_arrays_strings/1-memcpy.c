#include "../recursion/main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination area of the memory to be copied into
 * @src: source area of the memory to copy from
 * @n: max number of bytes to copy from src to dest
 * Return: the modified dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
