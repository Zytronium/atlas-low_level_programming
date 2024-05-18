#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints every letter in the alphabet
 * except e and q, and then prints a new line.
 *
 * Return: 0
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'q' && l != 'e')
			putchar(l);
	}
	putchar('\n');

	return (0);
}
