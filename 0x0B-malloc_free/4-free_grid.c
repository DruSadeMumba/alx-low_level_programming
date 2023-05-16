#include "main.h"

/**
 * free_grid - free a 2 dimensional grid previously created
 *
 * @grid: 2-dim array
 * @height: height
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
