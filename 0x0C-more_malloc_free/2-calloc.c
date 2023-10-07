#include "main.h"

/**
 *_calloc -  allocates memory for an array
 *@nmemb: number of elements
 *@size: size of the memory block to be allocated
 *Return: poiner to the address of the memory block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *block;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	block = malloc(nmemb * size);

	if (block == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		block[i] = 0;
	}

	return (block);
}

