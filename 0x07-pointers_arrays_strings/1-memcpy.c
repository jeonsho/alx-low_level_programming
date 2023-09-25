#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: A pointer to the destination memory area where the data will be copied.
 * @src: A pointer to the source memory area from which data will be copied.
 * @n: The number of bytes to copy from src to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j > n ; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
