#include "main.h"
#include <string.h>

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
* Return: pointer to the address of the memory block
*/
int *array_range(int min, int max)
{
	int *block;
	int i, j = 0, total;

	if (min > max)
	{
		return (NULL);
	}

	total = max - min;

	block = malloc((total + 1) * sizeof(int));

	if (block == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max ; i++)
	{
		block[j] = i;
		j++;
	}

	return (block);
}
