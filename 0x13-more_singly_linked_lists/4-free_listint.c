#include "lists.h"

/**
 * free_listint - Frees a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t  *nodes, *next;

	nodes = head;

	while (nodes != NULL)
	{
		next = nodes->next;
		free(nodes->str);
		free(nodes);
		nodes = next;
	}
}
