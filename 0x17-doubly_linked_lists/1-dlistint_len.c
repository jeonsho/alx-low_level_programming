#include "lists.h"

/**
 *dlistint_len - Returns the number of elements in a doubly linked list.
 *@h: A pointer to the head of the doubly linked list.
 *Return: The total number of elements (nodes) in the doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
