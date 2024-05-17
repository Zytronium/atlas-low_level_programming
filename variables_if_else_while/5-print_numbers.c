#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints every single-digit number
 * of base 10 starting from 0, then a new line,
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
