#include"lists.h"

/**
 *free_dlistint - Frees a doubly linked list.
 *@head: A pointer to the head of the doubly linked list.
 *Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
