#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *alloc_grid - pointer to a 2 dimensional array of integers
 *@width: input width
 *@height: input height
 *Return: returns NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int *ar;
	unsigned int i;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	**ar = malloc(height * sizeof(int *));

	if (ar == 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width* sizeof(int));
	}

	if (ar != NULL)
		return (ar);
	return (NULL);
}
