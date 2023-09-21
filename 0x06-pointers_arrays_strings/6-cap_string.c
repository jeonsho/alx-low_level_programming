#include "main.h"

/**
 *cap_string - Write a function that capitalizes all words of a string.
 *
 *@s: This is the input string
 *
 *Return: String capitalized
 */
char *cap_string(char *s)
{
	int n, i, j;

	char chars[] = { ' ', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}', '\t', '\n', '\0' };

	n = 32;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'i' && s[i] <= 'z')
		{
			s[i] = s[i] - n;
		}

		n = 0;
		for (j = 0; chars[j] != '\0'; j++)
		{
			if (chars[j] == s[i])
			{
				n = 32;
				break;
			}
		}
	}
	return(s);
}
