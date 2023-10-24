#include "lists.h"

/**
 *reverse_listint - Reverses a listint_t linked list.
 *@head: A pointer to a pointer to the head of the linked list.
 *
 *Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL, *node = *head;

	while (node != NULL)
	{
		next = node->next;
		node->next = prev;
		prev = node;
		node = next;
	}

	*head = prev;
	return (*head);
}
