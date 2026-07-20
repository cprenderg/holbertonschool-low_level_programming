#include "main.h"
/**
 * alloc_grid - return a pointer to a 2D array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: Grid of width and height, or NULL if width or height is 0
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width == 0 || height == 0)
		return (NULL);
	i = 0;
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i > 0)
			{
				i--;
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		i++;
	}
	if (grid == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
