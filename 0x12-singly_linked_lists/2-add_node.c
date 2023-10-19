#include "lists.h"

/**
 *add_node - Adds a new node at the beginning of a list_t list.
 *@head: Pointer to the head of the list.
 *@str: String to be duplicated and stored in the new node.
 *Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *duplicate_str;
	int len;

	if (head == NULL || str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	duplicate_str = strdup(str);
	if (duplicate_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
		;
	new_node->str = duplicate_str;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
