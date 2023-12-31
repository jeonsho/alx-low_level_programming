#include "main.h"

/**
 *leet - Write a function that encodes a string into 1337
 *
 *@s: This is the input string
 *
 *Return: String converted to 1337
 */
char *leet(char *s)
{
	int i, j;
	char M[] = { 'a', 'e', 'o', 't', 'l', '\0' };

	char L[] = { 'A', 'E', 'O', 'T', 'L', '\0' };

	char num[] = { '4', '3', '0', '7', '1', '\0' };

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == M[j] || s[i] == L[j])
			{
				s[i] = num[j];
			}
		}
	}

	return (s);
}
