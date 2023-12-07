#include"lists.h"

/**
 *insert_dnodeint_at_index - Inserts a new node at a given position
 *@h: A pointer to a pointer to the head of the doubly linked list.
 *@idx: The index at which the new node should be added (starting from 0).
 *@n: The integer value to be stored in the new node.
 *Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node, *current_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (*h == NULL || idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;

		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;

		return (new_node);
	}
	current_node = *h;
	for (i = 0; i < idx - 1 && current_node != NULL; i++)
	{
		current_node = current_node->next;
	}
	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = current_node;
	new_node->next = current_node->next;

	if (current_node->next != NULL)
	{
		current_node->next->prev = new_node;
	}

	current_node->next = new_node;
	return (new_node);
}
