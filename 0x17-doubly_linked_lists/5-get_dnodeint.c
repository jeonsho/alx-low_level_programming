#include"lists.h"

/**
 *get_dnodeint_at_index - Returns the nth node of a doubly linked list.
 *@head: A pointer to the head of the doubly linked list.
 *@index: The index of the node to be retrieved, starting from 0.
 *
 *Return: The address of the nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	if (head != NULL)
	{
		return (head);
	}
	else
	{
		return (NULL);
	}
}
