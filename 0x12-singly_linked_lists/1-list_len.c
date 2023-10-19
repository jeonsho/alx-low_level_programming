#include "lists.h"
#include <stddef.h>

/**
 *list_len - Returns the number of elements in a list_t list.
 *@h: The list_t list.
 *Return: The number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
