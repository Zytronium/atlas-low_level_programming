#include "main.h"
#include <stdlib.h>

/**
 * free_grid - recursively free all of the grid that has been allocated
 *
 * @grid: pointer to the grid
 * @height: height index so far
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL)
		return;
	if (height >= 0)
	{
		free(grid[height]);
		free_grid(grid, height - 1);
	}
	else
		free(grid);
}
