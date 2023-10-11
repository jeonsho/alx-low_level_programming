#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *for the search condition
 *@array: an array of integers.
 *@size: the number of array elements
 *@cmp: a pointer to the function used as search condition
 *Return: the index of the first element for which the cmp
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int a;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}

	return (-1);
}
