#include "main.h"

/**
 *_strlen - returns the length of a string.
 *@c: pointer of type char
 *Return: Always 0
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
