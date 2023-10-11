#include "function_pointers.h"

/**
 *array_iterator - executes a function given as a parameter
 *on each element of an array.
 *@array: an array of integers
 *@size: the size of array
 *@action: a pointer to the function that should be executed
 *on individual elements.
 *Return: nothing
 */
void array_iterator(int *array, int size, void(*action)(int))
{
	int a;

	if (arry == NULL || action == NULL)
		return;
	else
	{
		for (a = 0; a < size; a++)
			action(array[a]);
	}
}
