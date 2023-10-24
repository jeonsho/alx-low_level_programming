#include "lists.h"

/**
 *free_listint2 - Frees a listint_t linked list and sets the head to NULL.
 *@head: A pointer to a pointer to the head of the linked list.
 *Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *next;

	if (head == NULL || *head == NULL)
		return;
	node = *head;

	while (node != NULL)
	{
		next = node->next;
		free(node);
		node = next;
	}

	*head = NULL;
}
