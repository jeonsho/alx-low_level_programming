#include "main.h"

/**
 *get_bit - Gets the value of a bit at a given index.
 *@n: The unsigned long int.
 *@index: The index of the bit to retrieve (starting from 0).
 *
 *Return: The value of the bit at the given i
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int maxindex = sizeof(n) * 8;

	if (index > maxindex)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
