#include "main.h"

/**
 *_strspn - function that gets the length of a prefix substring
 *@s: A pointer to the string
 *@accept: A pointer to a string containing characters
 *
 *Return: char with result
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	bool found = false;
	int j;
	j = 0;
	while (s[j] != '\0')
	{
		found = false;
		for (int i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
			{
				found = true;
				break;
			}
		}

		if (!found)
		{
			break;
		}

		count++;
		// s++;
		j++;
	}

	return count;
}
