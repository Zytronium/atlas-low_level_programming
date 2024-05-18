#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints every combination of
 * single digit numbers (every combination?? They're single digit!),
 * followed by ",", then a space, then a new line.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
