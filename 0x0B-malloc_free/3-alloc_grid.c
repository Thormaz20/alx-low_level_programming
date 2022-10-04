#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - function
 * @width: int var
 * @height: int var
 * Return: NULL
*/

int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(width * sizeof(int));
		if (ptr[a] == NULL)
		{
			for (d = 0; d < a; d++)
				free(ptr[d]);
			free(ptr);
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
			ptr[b][c] = 0;
	}
	return (ptr);
}
