#include "main.h"
/**
 * print_chesseboard - prints a chessboard.
 * @a: matrix / 2D array of chess board in characters
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x <= 8; x++)
	{
		for (y = 0; y <= 8; y++)
			_putchar(a[x][y]);
		_putchar('\n');
	}
}
