#include "main.h"
#include <stdlib.h>

/**
 * free_grid - recursively free all of the grid that has been allocated so far
 *
 * @grid: pointer to the grid
 * @h: height index so far
 *
 * Return: nothing
 */
void free_grid(int **grid, int h)
{
	if (h >= 0)
	{
		free(grid[h]);
		free_grid(grid, h - 1);
	}
	else
		free(grid);
}

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
	if (grid == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		grid[y] = malloc(sizeof(int) * width);
		if (grid[y] == NULL)
		{
			free_grid(grid, y - 1);
			return (NULL);
		}
		for (x = 0; x < width; x++)
			grid[y][x] = 0;
	}

	return (grid);
}
