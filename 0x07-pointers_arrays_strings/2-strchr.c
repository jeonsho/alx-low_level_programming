#include "main.h"

/**
 **_strchr - a function that locates a character in a string
 *@s: A pointer to the string in which we want to locate the c
 *@c:The character we want to locate in the string s
 *Return:c or null
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	return (NULL);
}
