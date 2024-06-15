#include "main.h"
#include <stdio.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int **grid;

	grid = alloc_grid(6, 4);
	if (grid == NULL)
	{
		return (1);
	}
	print_grid(grid, 6, 4);
	printf("\n");
	grid[0][3] = 98;
	grid[3][4] = 402;
	print_grid(grid, 6, 4);
	free_grid(NULL, 4);
	return (0);
	/*switch ((!strcmp(argv[1], "NULL") * 10) + (!strcmp(argv[2], "NULL"))) { // basically 2 bits of binary code, which can either be 00, 01, 10, or 11
		case 0:
			s = str_concat(argv[1], argv[2]);
			break;

		case 1:
			s = str_concat(argv[1], NULL);
			break;

		case 10:
			s = str_concat(NULL, argv[2]);
			break;

		default:
			s = str_concat(NULL, NULL);
			break;
	}*/ /*thought this was pretty neat, so I kept it for now*/
}