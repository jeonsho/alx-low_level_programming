#include "main.h"

/**
 *string_toupper - a function that changes all lowercase letters of a
 *string to uppercase.
 *
 *@hi: This is the input string
 *
 *Return: Lowercase changed to uppercase of the string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
	}
	return (s);
}	
