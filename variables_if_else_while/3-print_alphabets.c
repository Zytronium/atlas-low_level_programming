#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints every letter in the alphabet lowercase,
 * then again uppercase, and then a new line.
 *
 * Return: 0
 */
int main(void)
{
	char l;
	char l2;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (l2 = 'A'; l2 <= 'Z'; l2++)
	{
		putchar(l2);
	}
	putchar('\n');

	return (0);
}
