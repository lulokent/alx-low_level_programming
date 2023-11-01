#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - nested loop to make a grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **output;

	if (width <= 0 || height <= 0)
		return (NULL);
	output = malloc(sizeof(int) * height);
	if (output == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		output[i] = malloc(sizeof(int) * width);
			if (output[i] == NULL)
			{
				for (; i >= 0; i--)
					free(output[i]);
				free(output);
				return (NULL);
			}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			output[i][j] = 0;
	}
	return (output);
}


