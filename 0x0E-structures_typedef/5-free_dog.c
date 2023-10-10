#include"dog.h"
/**
 * free_dog - frees the dogs..
 * @d: Pointer to the struct.
 * Return: None.
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	else if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
