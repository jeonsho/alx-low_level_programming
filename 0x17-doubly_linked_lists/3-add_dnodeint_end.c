#include"lists.h"

/**
 *add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 *
 *@head: A pointer to a pointer to the head of the doubly linked list.
 *@n: The integer value to be stored in the new node.
 *
 *This function adds a new node with the specified value at the end
 *of a doubly linked list. If the allocation for the new node fails, it
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	dlistint_t *last_node = *head;

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	new_node->prev = last_node;
	last_node->next = new_node;

	return (new_node);
}
