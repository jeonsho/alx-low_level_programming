#include "main.h"

/**
 *_strchr - function that locates a character in a string
 *@s: A pointer to the string
 *@c: The character we want to locate
 *
 *Return: char with result
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}

	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
