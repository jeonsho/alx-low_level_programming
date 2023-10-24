#include "lists.h"

/**
 *print_listint - prints all the elements of a linked list
 *@h: A pointer to the head of the linked list.
 *Return: The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		elements++;
		h = h->next;
	}

	return (elements);
}
