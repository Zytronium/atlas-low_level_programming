#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2-D grid of integers, all 0.
 * The numbers in this grid can be edited later, outside of the function
 * (well, they CAN be edited inside the function too, but they're not)
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: a pointer to a 2 dimensional array of integers,
 * or NULL on malloc failure or @width or @height being 0 or negative.
*/
int **alloc_grid(int width, int height)
{
	int x, y;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	for (y = 0; y < height; y++)
	{
		grid[y] = malloc(sizeof(int) * width);
		for (x = 0; x < width; x++)
			grid[y][x] = 0;
	}

	return (grid);
}