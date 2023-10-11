#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *array_iterator - executes a function given as a parameter
 *@array: an array of integers
 *@size: the size of array
 *@action: a pointer to the function that should be executed
 *on individual elements.
 *Return: nothing
 */
void array_iterator(int *array, int size, void(*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
