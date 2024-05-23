#include "main.h"
/**
 * print_diagonal - print a diagonal line that is @n backslashes long
 * @n: number of backslashes to print.
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int r = 0;
	int r2;

	for (r = 0; r2 = 0; r < n; r++)
	{
		while (r2 < r)
		{
			_putchar(' ');
			r2++;
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
