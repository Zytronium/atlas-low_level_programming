#include "main.h"
/**
 * print_triangle - prints a right triangle with hashtags(#)
 * @size: size of it; number of characters ('#' and ' ') in each row and column
 * Return: 0
 */
void print_triangle(int size)
{
	int row = 1;
	int col = 1;
	int spaces = size;
	int sr = 1;

	while (row <= size)
	{
		for (spaces = 1; spaces <= size - row; spaces++)
		{
			_putchar(' ');
		}
		for (col = 1; col <= row; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
		row++;
	}
	if (size <= 0)
		_putchar('\n');
}
