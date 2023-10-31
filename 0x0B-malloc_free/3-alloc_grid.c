#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - Allocate and initialize a 2D grid of integers
* @width: The width of the grid
* @height: The height of the grid
*
* Return: Pointer to the allocated grid, or NULL on failure
*/
int **alloc_grid(int width, int height)
{
if (width <= 0 || height <= 0)
{
return (NULL);
}

int **grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}

int i = 0;
int j;

while (i < height)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
while (i >= 0)
{
free(grid[i]);
i--;
}
free(grid);
return (NULL);
}

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
