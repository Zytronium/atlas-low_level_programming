#include "main.h"
/**
 * print_square - prints a square the size of @size x @size with hashtags(#)
 * @size: size of  the square; number of #s in each row and column.
 * Return: 0
 */
void print_square(int size)
{
	int row = 1;
	int col = 1;

	while (row <= size)
	{
		for (col = 1; col <= size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
		row++;
	}
	if (size <= 0)
		_putchar('\n');
}
