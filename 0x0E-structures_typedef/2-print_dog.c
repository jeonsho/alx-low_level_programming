#include"dog.h"

/**
 *print_dog - print a structure.
 *@d: pointer containing the structure.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		printf("nil\n");
	else
	{
		printf("Name: %s\n", d->name);
	}

	if ((*d).age == NULL)
		printf("nil\n");
	else
	{
		printf("Name: %s\n", d->age);
	}

	if ((*d).owner == NULL)
		printf("nil\n");
	else
	{
		printf("Name: %s\n", d->owner);
	}
}
