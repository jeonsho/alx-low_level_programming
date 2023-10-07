#include "main.h"

/**
 *malloc_checked - allocates memory using malloc
 *@b: size of the memory block to be allocated
 *
 *Return: pointer to the address of the memory block
 */
void *malloc_checked(unsigned int b)
{
	char *m;

	m = malloc(b);
	if (m == NULL)
		exsit(98);
	return (m);
}
