#include "lists.h"

/**
 *free_list - Frees a list_t list.
 *@head: Pointer to the head of the list.
 *Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *nodes, *next;

	nodes = head;

	while (nodes != NULL)
	{
		next = nodes->next;
		free(nodes->str);
		free(nodes);
		nodes = next;
	}
}
