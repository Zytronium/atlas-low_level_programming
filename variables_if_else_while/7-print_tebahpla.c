#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints every letter in the alphabet in reverse and then a new line.
 *
 * Return: 0
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l-)
	{
		putchar(l);
	}
	putchar('\n');

	return (0);
}
