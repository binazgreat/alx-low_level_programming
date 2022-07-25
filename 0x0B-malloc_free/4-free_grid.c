#include "main.h"
/**
 * free_grid - removing memory allocation
 * @grid: Grid to be freed
 * @height: Height of matrix
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
