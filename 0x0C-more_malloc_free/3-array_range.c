#include "main.h"

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
* Return: pointer to the address of the memory block
*/
int *array_range(int min, int max)
{
	int *block;
	int i, j, total;

	if (min > max)
	{
		return (NULL);
	}

	block = malloc((total + 1) * sizeof(int));

	if (block == NULL)
	{
		return (NULL);
	}

	for (i = 0; j = min; j <= max; j++; i++)
	{
		block[i] = j;
	}

	return (block);
}
