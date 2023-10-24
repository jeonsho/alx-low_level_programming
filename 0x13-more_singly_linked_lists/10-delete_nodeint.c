#include "lists.h"

/**
 *delete_nodeint_at_index - Deletes the node at index index of a listint_t
 *@head: A pointer to a pointer to the head of the linked list.
 *@index: The index of the node to be deleted. Index starts at 0.
 *
 *Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	node = *head;

	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}

	for (i = 0; i < index - 1 && node != NULL; i++)
	{
		node = node->next;
	}

	if (node == NULL || node->next == NULL)
		return (-1);

	temp = node->next;
	node->next = temp->next;
	free(temp);

	return (1);
}
