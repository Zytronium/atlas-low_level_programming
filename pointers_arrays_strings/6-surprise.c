#include "main.h"
/**
 * repeat_print_surprise - prints a surprise a certain number of times.
 * file 6 was skipped, so I made this joke to fill in
 * the gap between task 5 and 6 (files 5 and 7).
 *
 * @repeat: number of times to repeat printing the surprise
 *
 * Return: 0
 */
void repeat_print_surprise(int repeat)
{
	char surprise[25] = "Never Gonna Give You Up!\n";
	int i, j;

	for (i = 0; i < repeat; ++i)
	{
		for (j = 0; j < 25; j++)
		{
			_putchar(surprise[j]);
		}
	}
}
