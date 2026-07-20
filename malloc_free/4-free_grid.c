#include "main.h"
/**
 * free_grid - frees a 2D grid
 * @grid: grid to be freed
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
