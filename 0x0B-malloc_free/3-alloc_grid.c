#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * alloc_grid - function that returns a pointer to
 * a two dimensional array of integers
 * @width: integer
 * @height: integer
 *
 * Return: pointer to array or NULL
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	p = malloc(height * sizeof(int *));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (i--; i>= 0; i--)
				free(p);
			free(p);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	return (p);
}

