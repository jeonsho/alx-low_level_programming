#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: A pointer to the string in which we want to locate the c
 * @c:The character we want to locate in the string s
 * Return: s or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (NULL);
}
