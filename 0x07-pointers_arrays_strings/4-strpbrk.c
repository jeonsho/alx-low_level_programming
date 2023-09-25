#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes..
 *@s: A pointer to the string in which we want to search
 *@accept: A pointer to a string containing the bytes
 *
 * Return: char or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (j = 0; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
				return (s + j);
		}
	}
	return (NULL);
}