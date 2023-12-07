#include"lists.h"

/**
 *add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 *@head: A pointer to a pointer to the head of the doubly linked list.
 *@n: The integer value to be stored in the new node.
 *
 *This function adds a new node with the specified value at the beginning
 *of a doubly linked list. If the allocation for the new node fails, it
 *Return: the address of the new element, or NULL if it failed.
 */
dlistint_t* add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;

	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
