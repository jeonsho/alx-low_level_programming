#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @s: string - (malloc'ed string)
 * @lenght: length of the string
 * @next: points to the next node
 */
typedef struct list_s
{
	char *s;
	unsigned int lenght;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
