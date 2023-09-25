#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 *@s: A pointer to the string
 *@accept: A pointer to a string containing characters
 *
 * Return: char with result
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0, m, j = 0;

	if (*accept == '\0' || *s == '\0')
		return (0);
	while (s[j] != '\0')
	{
		m = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
			{
				m = 1;
				break;
			}
		}

		if (m == 1)
		{
			count++;
			j++;
		}
		else
		{
			break;
		}
	}

	return (count);
}
